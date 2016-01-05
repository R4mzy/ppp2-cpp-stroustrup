#include "../res-files/std_lib_facilities.h"

int main() {
	int integer = 42; // declaring an integer with literal (usage?) value
	double doublet = 4.2; // declaring a double...
	char character = 'z'; // and a char...
	string stringer = "theory"; // yep, string there... can I just use str to declare this?
	bool bloo = true; // and there's a... you get the idea.
	
	// now output them back:
	cout << "\n An integer: " << integer;
	cout << "\n A double: " << doublet;
	cout << "\n A char: " << character;
	cout << "\n A string: " << stringer;
	cout << "\n And a bool: " << bloo;
	
	// done, but wait for input before quitting...
	cout << "\n\n Press <Enter> to continue... \n";
	getchar();
	return 0;
	
}