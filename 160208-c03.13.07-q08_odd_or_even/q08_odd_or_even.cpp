#include "../res-files/std_lib_facilities.h"

	// Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete. 
	// In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even number. Hint: See the remainder 
	// (modulo) operator in §3.4.

int main() {
	// interesting note on numbers longer than ten digits - they cause an overflow and the number read into the variable weirds out.
	// google and stackoverflow have told me there are variable types to use to avoid this issue but that, obviously, is out of scope
	// but for completion: https://stackoverflow.com/questions/2231525/storing-and-printing-10-digit-integer-in-c
	
	cout << "\nIs your number odd or even?! Enter it now to find out! (No numbers longer than 10 digits though, because overflows.)\n";
	
	int intTestValue = 0;
	cin >> intTestValue;
	
	// if even
	if (intTestValue % 2 == 0) {
		cout << "\nThe value " << intTestValue << " is an even number.";
	}
	
	// if odd
	if (intTestValue % 2 != 0) {
		cout << "\nThe value " << intTestValue << " is an odd number.";
	}
	

}