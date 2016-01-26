#include "../res-files/std_lib_facilities.h"

// get three integers and then return them in sorted, ascending order

int main() {
	cout << "\nHey let me sort three integer numbers for you. Enter them now.\n";

	int first = 0;
	int second = 0;
	int third = 0;

	int current;
	while (cin >> current) {
		if (current > third) {
			// yes - evaluate next level
			if (current > second) {
				//yes - evaluate next level
				if (current > first) {
					// yes - last level so assign values
					third = second;
					second = first;
					first = current;
				}
				// no - assign values
				if (current <= first) {
				third = second;
				second = current;
				}
			}
			// no - assign values
			if (current <= second) {
			third = current;
			}
		}
		// if current !> third then current = 0 or is not an integer and we have nothing to do
	}
		
	cout << "\nAlright, here you are: " << first << ", " << second << ", " << third << '\n';
	return 0;
}
