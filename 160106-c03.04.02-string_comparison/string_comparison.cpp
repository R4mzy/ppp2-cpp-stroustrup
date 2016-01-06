#include "../res-files/std_lib_facilities.h"

// read and compare names
int main() {
	cout << "Please enter two names.\n";
	
	string first;
	string second;
	
	cin >> first >> second; 	// read two strings
	
	if (first == second) cout << "\nThat's the same name twice.\n";
	if (first < second) cout << '\n' << first << " is alphabetically before " << second << ".\n";
	if (first > second) cout << '\n' << first << " is alphabetically after " << second << ".\n";
}