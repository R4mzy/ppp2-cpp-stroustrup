#include "../res-files/std_lib_facilities.h"

// read name and age
int main() {
	cout << "Please enter your first name and age.\n";
	string first_name = "???"; 	// declaring a string variable ("???" means "don't know the name")
	double age = -1; 			// declaring a double variable (-1 means "don't know the  age")
	cin >> first_name >> age; // read a string followed by a double - using single input statement for multiple values
	cout << "\nHello, " << first_name << " (age " << (age * 12) << " months).\n"; // display back the data supplied, with the converted age
}