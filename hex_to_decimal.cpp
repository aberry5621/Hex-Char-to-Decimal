//
//  hex_digit_to_decimal.cpp
//  Purpose: convert hex to decimal
//
//  Created by alex on 9/9/16.

#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char hex_digit;
	int value = 0;

	cout << "Enter a hex digit as a character (0-9, A-F, or a-f): ";
	cin >> hex_digit;

	hex_digit = toupper(hex_digit);
	
	if ((hex_digit >= 'A') && (hex_digit <= 'F')) {
		value = 10 + hex_digit - 'A';
		cout << "The decimal value for hex digit " << hex_digit << " is " << value << endl;
	} else if (isdigit(hex_digit)) {
		cout << "The decimal value for hex digit " << hex_digit << " is " << hex_digit << endl;
	} else {
		cout << hex_digit << " is an invalid input!" << endl;
	}

	return 0;
}
