/*
 * Kinematics.cpp
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 *  Note: ALL UNITS ARE SI UNLESS CONVERTED TO OTHERWISE. ALL RAW INPUTS WILL BE USING SI UNITS.
 */

#include "Kinematics.h"

Kinematics::Kinematics() {

}

Kinematics::~Kinematics() {
}


// latitude:		degrees
// return value:	seconds^-1
double Kinematics::coriolisParameter(double latitude) {
	double f = 2 * coriolisConstant * sin(latitude * PI/180.0);

	return f;
}

// velocity:		m s^-1 (expected order of components: zonal (+east), meridional (+north), altitudinal (+up)
// latitude:		degrees
// return value:	m s^-2
vector<double> Kinematics::coriolisForce(vector<double> velocity, double latitude) {
	double dimensions = velocity.size();

	if(dimensions <= 1 || dimensions >= 4) {
		vector<double> force(dimensions, 0);

		return force;
	}

	double u = velocity[0];
	double v = velocity[0];
	double f = coriolisParameter(latitude);

	if(dimensions == 2) {
		vector<double> force = {f * v, -f * u};

		return force;
	} else { // will only execute if dimensions == 3
		vector<double> force = {f * v, -f * u, 0};

		return force;
	}
}

