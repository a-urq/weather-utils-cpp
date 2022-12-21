/*
 * UnitConversions.cpp
 *
 *  Created on: Dec 20, 2022
 *      Author: a-urq
 */

#include "UnitConversions.h"

UnitConversions::UnitConversions() {

}

UnitConversions::~UnitConversions() {
}

double UnitConversions::fahrenheitToCelsius(double temperatureF) {
	double temperatureC = (temperatureF - 32) / 1.8;

	return temperatureC;
}

double UnitConversions::celsiusToKelvin(double temperatureC) {
	double temperatureK = temperatureC + 273.15;

	return temperatureK;
}

double UnitConversions::fahrenheitToKelvin(double temperatureF) {
	double temperatureK = celsiusToKelvin(fahrenheitToCelsius(temperatureF));

	return temperatureK;
}

double UnitConversions::kelvinToCelsius(double temperatureK) {
	double temperatureC = temperatureK - 273.15;

	return temperatureC;
}

double UnitConversions::celsiusToFahrenheit(double temperatureC) {
	double temperatureF = 1.8 * temperatureC + 32;

	return temperatureF;
}

double UnitConversions::kelvinToFahrenheit(double temperatureK) {
	double temperatureF = celsiusToFahrenheit(kelvinToCelsius(temperatureK));

	return temperatureF;
}

double UnitConversions::hectopascalsToPascals(double pressureHPa) {
	double pressurePa = pressureHPa/100.0;

	return pressurePa;
}

double UnitConversions::pascalsToHectopascals(double pressurePa) {
	double pressureHPa = pressurePa * 100.0;

	return pressureHPa;
}
