// read and write a first name
#include "../res-files/std_lib_facilities.h"

int main() {
	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "first_name is " << first_name << ".\n"; // printing the value of first_name for extra redundancy or something
	cout << "\nHello, " << first_name << "!\n";
		// at first I thought the input was being gathered at the cout, then var declared, then var filled. 
		// but that is not the case - remember cout only prints the message. cin actually opens the prompt to get input and
		// then writes that to the var. adoi!
}
