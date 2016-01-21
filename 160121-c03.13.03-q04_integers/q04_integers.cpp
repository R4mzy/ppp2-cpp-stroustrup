#include "../res-files/std_lib_facilities.h"

// smaller, larger, sum, difference, product, ratio between two integers

int main() {
	cout << "\nSo let me tell you about two numbers. Enter two integer numbers, seperated by a whitespace, now.\n";
	int val1;
	int val2;
	double larger;
	double smaller;
	cin >> val1 >> val2;
	
	// if the values are the same
	if (val1 == val2) {
		cout << val1 << " and " << val2 << " are the same.\n";
	}

	// determine the larger and smaller
	if (val1 > val2) {
		larger = val1;
		smaller = val2;
	}
	if (val2 > val1) {
		larger = val2;
		smaller = val1;
	}

	// work out the things
	cout << larger << " is larger than " << smaller << ".\n"
		<< "Their sum is: " << larger+smaller << '\n'
		<< "Their difference is: " << larger-smaller << '\n'
		<< "Their product is: " << larger*smaller << '\n'
		<< "Their smaller:larger ratio is: " << "1:" << 1/(smaller/larger) << '\n';
		return 0;
	
}
