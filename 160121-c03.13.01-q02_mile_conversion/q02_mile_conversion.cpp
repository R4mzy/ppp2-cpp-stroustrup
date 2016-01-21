#include "../res-files/std_lib_facilities.h"

// this app is to convert a given number of miles to kilometers - 1 mile = 1.609 kilometers

int main() {
	// ask the user how many miles they've got
	cout << "\nSo you have some miles and need kilometers, eh? \n"
		<< "I can do that. \n"
		<< "\nHow many miles you got? (Just a number is fine. With a decimal is fine too, ie. 1.1)\n";
	
	// allow the user to enter an answer and store it
	double miles = 0;
	cin >> miles;

	// convert the miles to kilometers and tell the user
	double kilometers = miles * 1.609;
	cout << "\nOkay, " << miles << " miles converts to " << kilometers << " kilometers.\n";
}
