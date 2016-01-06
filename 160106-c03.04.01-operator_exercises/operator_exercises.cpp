#include "../res-files/std_lib_facilities.h"

// simple program to exercise operators
int main() {
	cout << "Please enter a floating-point value, followed by an integer: ";
	
	double n;
	int a;
	
	cin >> n >> a;
	
	int b = a+6;
	
	cout << "n == " << n
			<< "\na == " << a
			<< "\nb == " << b
			<< "\na+1 == " << a+1
			<< "\nthree times a == " << 3*a
			<< "\ntwice a == " << a+a
			<< "\na squared == " << a*a
			<< "\nhalf of a == " << a/2
			<< "\nsquare root of n == " << sqrt(n)
			<< "\nremainder of b divided by a == " << b%a
			<< "\n(a/b * b + a%b) should equal a == " << a/b * b + a%b
			<< '\n'; // another name for newline ("end of line") in output
			
	// strings now
	cout << "\nHow 'bout strings then? Please enter any two words seperated by a whitespace: \n";
	
	string one;
	string two;
	
	cin >> one >> two;
	
	string three = one + two;
	
	cout << '\n' << one << " and " << two << " and " << three << '.';
}