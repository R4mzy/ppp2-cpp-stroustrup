#include "../res-files/std_lib_facilities.h"

int main() {
	double d = 0;
	while (cin>>d) {						// repeat the statements below
											// as long as we type in numbers
		int i = d;							// try to squeeze a double into an int
		char c = i;							// try to squeeze and int into a char
		int i2 = c;							// get the integer value of the character
		cout << "d==" << d						// the original double
			<< " i=="<< i 						// converted to int	
			<< " i2==" << i2					// int value of char
			<< " char(" << c << ")\n";			// the char
	}
	// crashes/exits on entry of an invalid double value, like a letter or symbol
	// surprisingly, some high numbers work (like 45645)
	
	/*
	// can't use this 'cause it'll hit compile errors ;)
	cout << "\n\nand again but with {}-list notation... \n";
	while (cin>>d) {						// repeat the statements below
											// as long as we type in numbers
		int i {d};							// try to squeeze a double into an int -- compiler returns double to int narrowing conversion error
		char c {i};							// try to squeeze and int into a char -- compiler returns int to char narrowing conversion
		int i2 {c};							// get the integer value of the character
		cout << "d==" << d						// the original double
			<< " i=="<< i 						// converted to int	
			<< " i2==" << i2					// int value of char
			<< " char(" << c << ")\n";			// the char
	}
	*/
}

// I suppose further reading will tell me why {}-list notation (universal and uniform initialisation) is not just used all the time to eliminate unsafe conversions