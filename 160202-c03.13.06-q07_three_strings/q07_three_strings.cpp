#include "../res-files/std_lib_facilities.h"

// get three strings and then return them in ascending alphabetical order

int main() {
	cout << "\nHey let me sort three words for you. Enter them now.\n";

	string first = " ";
	string second = " ";
	string third = " ";
	
	int loops = 0;
	
	string current;
	while (cin >> current) {
//		cout << "\ncurrent: " << current;		// this and others like it were for debug purposes to track value assignments
		if (current >= first) {
			third = second;
//			cout << "\nthird: " << third;
			
			second = first;
//			cout << "\nsecond: " << second;
					
			first = current;
//			cout << "\nfirst: " << first;
		}
		
		if (current >= second) {
			if (current < first) {
				third = second;
//				cout << "\nthird: " << third;
				
				second = current;
//				cout << "\nsecond: " << second;
			}
		}
		
		if (current >= third)
			if (current < second) {
				third = current;
//				cout << "\nthird: " << third;
			}
			
		++loops;
		// Once the while loop has run three times, therefore three values parsed, end the loop/program and output the results.
		if (loops == 3) {
			cout << "\nAlright, here you are: " << third << ", " << second << ", " << first << '\n';
			return 0;
		}
	}
}
