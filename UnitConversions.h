/*
 * UnitConversions.h
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 */

#ifndef UNITCONVERSIONS_H_
#define UNITCONVERSIONS_H_

class UnitConversions {
public:
	UnitConversions();
	~UnitConversions();

	// temperature
	static double fahrenheitToCelsius(double);
	static double celsiusToKelvin(double);
	static double fahrenheitToKelvin(double);

	static double celsiusToFahrenheit(double);
	static double kelvinToCelsius(double);
	static double kelvinToFahrenheit(double);

	// pressure
	static double pascalsToHectopascals(double);

	static double hectopascalsToPascals(double);
};

#endif /* UNITCONVERSIONS_H_ */
