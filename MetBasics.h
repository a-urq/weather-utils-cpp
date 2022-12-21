/*
 * Basics.h
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 */

#ifndef METBASICS_H_
#define METBASICS_H_

#include <cmath>

class MetBasics {
public:
	MetBasics();
	~MetBasics();

	static double constexpr dryAirGasConstant = 287; // J kg^-1 K^-1
	static double constexpr waterVaporGasConstant = 461.5; // J kg^-1 K^-1

	static double constexpr latentHeatOfVaporization = 2500000; // J kg^-1
	static double constexpr latentHeatOfMelting = 334000; // J kg^-1
	static double constexpr latentHeatOfSublimation = 2830000; // J kg^-1

	static double absoluteHumidity(double vaporPressure, double temperature);
	static double dryAirDensity(double dryAirPressure, double temperature);
	static double mixingRatio(double pressure, double vaporPressure, double temperature);
	static double pressureAtHeight(double seaLevelPres, double height);
	static double relativeHumidity(double temperature, double dewpoint);
	static double saturationVaporPressure(double temperature);
	static double specificHumidity(double pressure, double vaporPressure, double temperature);
};

#endif /* METBASICS_H_ */
