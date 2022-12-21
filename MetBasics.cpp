/*
 * Basics.cpp
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 *  Note: ALL UNITS ARE SI UNLESS CONVERTED TO OTHERWISE. ALL RAW INPUTS WILL BE USING SI UNITS.
 */

#include "MetBasics.h"

MetBasics::MetBasics() {
}

MetBasics::~MetBasics() {
}

// vaporPressure:	Pascals
// temperature:		Kelvins
// return value: 	kg m^-3
double MetBasics::absoluteHumidity(double vaporPressure, double temperature) {
	double waterVaporDensity = vaporPressure / (waterVaporGasConstant * temperature);

	return waterVaporDensity;
}

// vaporPressure:	Pascals
// temperature:		Kelvins
// return value: 	kg m^-3
double MetBasics::dryAirDensity(double dryAirPressure, double temperature) {
	double dryAirDensity = dryAirPressure / (dryAirGasConstant * temperature);

	return dryAirDensity;
}

// pressure:		Pascals
// vaporPressure:	Pascals
// temperature:		Kelvins
// return value: 	Fraction
double MetBasics::mixingRatio(double pressure, double vaporPressure, double temperature) {
	double waterVaporDensity = absoluteHumidity(vaporPressure, temperature); // kg m^-3
	double airDensity = dryAirDensity(pressure - vaporPressure, temperature); // kg m^-3

	return waterVaporDensity / airDensity;
}

// seaLevelPres: 	Pascals
// height: 			Meters
// return value:	Meters
double MetBasics::pressureAtHeight(double seaLevelPres, double heightAboveSeaLevel) {
	double scaleHeight = 7290;

	return seaLevelPres * exp(-heightAboveSeaLevel/scaleHeight);
}

// temperature: 	Kelvins
// dewpoint: 		Kelvins
// return value:	Percent
double MetBasics::relativeHumidity(double temperature, double dewpoint) {
	double vaporPres = saturationVaporPressure(dewpoint);
	double satVaporPres = saturationVaporPressure(temperature);

	return 100*vaporPres/satVaporPres;
}

// temperature: 	Kelvins
// return value:	Pascals
double MetBasics::saturationVaporPressure(double temperature) {
	double e0 = 611; // Pascals

	double t0 = 273.15; // Kelvins

	return e0 * exp(latentHeatOfVaporization/waterVaporGasConstant * (1/t0 - 1/temperature));
}

// pressure:		Pascals
// vaporPressure:	Pascals
// temperature:		Kelvins
// return value: 	Fraction
double MetBasics::specificHumidity(double pressure, double vaporPressure, double temperature) {
	double waterVaporDensity = absoluteHumidity(vaporPressure, temperature); // kg m^-3
	double airDensity = dryAirDensity(pressure - vaporPressure, temperature); // kg m^-3

	return waterVaporDensity / (waterVaporDensity + airDensity);
}
