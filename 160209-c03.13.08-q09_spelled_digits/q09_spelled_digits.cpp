#include "../res-files/std_lib_facilities.h"

	/*
	Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. When the user inputs a number, the program should print 
	out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters something that doesn’t correspond, such 
	as stupid computer!.
	*/

int main() {
	cout << "\nSpell out a number! Any number! Even multiple numbers seperated by a space!" << "\n... Err, as long as they're zero, one, two, three, or four..."
		<< "\n Also, enter 'done' to quit.\n\n";
	
	string strNumber;
	while (cin >> strNumber) {
		// if it's something we know
		if (strNumber == "zero") {
			cout << " 0";
		}
		if (strNumber == "one") {
			cout << " 1";
		}
		if (strNumber == "two") {
			cout << " 2";
		}
		if (strNumber == "three") {
			cout << " 3";
		}
		if (strNumber == "four") {
			cout << " 4";
		}
		
		// if it's something we don't know
		if (strNumber != "zero") {
			if (strNumber != "one") {
				if (strNumber != "two") {
					if (strNumber != "three") {
						if (strNumber != "four") {
							if (strNumber != "done") {
								cout << " what?";
							}
						}
					}
				}
			}
		}
		
		// done to quit
		if (strNumber == "done") {
			cout << "\ndone received > quitting";
			return 0;
		}
	}
	
	
	
}