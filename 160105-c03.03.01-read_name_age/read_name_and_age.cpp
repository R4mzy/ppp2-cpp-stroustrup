#include "../res-files/std_lib_facilities.h"

int main() {
	/*
	"A string read using >> is (by default) terminated by whitespace."
	Anything following the whitespace is read into a subsequent variable or I guess dropped/ignored if there are no further variables to store anything in...
	I see interesting array operations with this.
	*/
	
	cout << "Please enter your first and second names:\n";
	string first;
	string second;
	cin >> first >> second; //read two strings
	cout << "Hello, " << first << " " << second << ".\n";
}

/*
// initial name and age example in c03.03

// read name and age
int main() {
	cout << "Please enter your first name and age.\n";
	string first_name = "???"; 	// declaring a blank string variable ("???" means "don't know the name")
	int age = -1; 			// declaring a blank integer variable (-1 means "don't know the  age")
	cin >> first_name >> age; // read a string followed by an integer - using single input statement for multiple values
	cout << "\nHello, " << first_name << " (age " << age << ").\n"; // display back the data supplied
}

/*
1st build used the following to read name and age:
	cin >> first_name; 	// reading a string to store in first_name (cin reads input from the keyboard until <Enter> is pressed)
	cin >> age; 		// reading an integer to store in age
You still input the name and age with a single input string, but required two statements.
*/
