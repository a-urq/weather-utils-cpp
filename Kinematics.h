/*
 * Kinematics.h
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 */

#ifndef KINEMATICS_H_
#define KINEMATICS_H_

#include <cmath>
#include <vector>

using namespace std;

class Kinematics {
private:
	static double constexpr PI = 2 * acos(0);
public:
	Kinematics();
	~Kinematics();

	static double constexpr coriolisConstant = 0.00007292; // seconds^-1

	static double coriolisParameter(double latitude);
	static vector<double> coriolisForce(vector<double> velocity, double latitude);
};

#endif /* KINEMATICS_H_ */
