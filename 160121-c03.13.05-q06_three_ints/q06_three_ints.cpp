#include "../res-files/std_lib_facilities.h"

// get three integers and then return them in sorted, ascending order

int main() {
	cout << "\nHey let me sort three integer numbers for you. Enter them now.\n";
	int num1;
	int num2;
	int num3;

	cin >> num1 >> num2 >> num3;

	int first = 0;
	int second = 0;
	int third = 0;
		
	
	// if the user is trolling
	if (num1 == num2) {
		if (num2 == num3) {
			first = num1;
			second = num2;
			third = num3;
		}
	}

/*
	while (num1 >= num2) {
		if (num1 >
	}

	cout << "\nAlright here you go:\n";

*/	

	cout << "\nAlright, here you are: " << first << ", " << second << ", " << third << '\n';
	return 0;

}
