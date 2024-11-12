// Main file for fixedPower

#include "fixedPowers.h"
#include <iostream>
using namespace std;

double power(int base, int exponent) {

	int output = 1; // The output variable
	double result;
	
	if (base == 0) { // Check if the base of a power is 0, if so - return 
		return 0;
	}
	if (exponent == 0) {
		return 0;
	}
	if (exponent > 0) {
		for (int i = 0; i < exponent; i++) { // Multiply the number by the base of a power in range of an exponent
			output *= base;
		}
		result = output;
	} else {
		for (int i = 0; i > exponent; i--) { // Multiply the number by the base of a power in range of an exponent
			output *= base;
		}
		result = 1.0 / output; // Flip te output fraction if the exponent is below zero	
	}

	return result;
}

