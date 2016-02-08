#include "../res-files/std_lib_facilities.h"

// get three integers and then return them in sorted, ascending order
// this one certainly exercised my unfit logical mind...

int main() {
	cout << "\nHey let me sort three integer numbers for you. Enter them now.\n";

	int first = 0;
	int second = 0;
	int third = 0;
	
	int loops = 0;
	
	int current;
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
			cout << "\nAlright, here you are: " << first << ", " << second << ", " << third << '\n';
			return 0;
		}
	}

// my original attempt, abandoned when thought to start my evaluations with var:first rather than var:third		
/*		if (current > third) {
			cout << "\ncurrent: " << current;
			// yes - evaluate next level
			if (current > second) {
				//yes - evaluate next level
				if (current > first) {
					// yes - last level so assign values
					third = second;
					cout << "\nthird: " << third;
					
					second = first;
					cout << "\nsecond: " << second;
					
					first = current;
					cout << "\nfirst: " << first;
				}
				// no - assign values
				if (current <= first) {
				third = second;
				cout << "\nthird: " << third;
				
				second = current;
				cout << "\nsecond: " << second;
				}	
			}
			// no - assign values
			if (current <= second) {
			third = current;
			cout << "\nthird: " << third;
			}	
		}
		// if current !> third then current = 0 or is not an integer and we have nothing to do
*/
}
