#include "../res-files/std_lib_facilities.h"

int main() {
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;
	cout << c << ' ' << i1 << ' ' << i2 << ' ' << c2 << '\n';
	
	double d1 = -2.3;
	double d2 = d1+2;	// 2 is converted to 2.0 before adding
	if (d1 < 0)			// 0 is converted to 0.0 before comparison
		cout << "d1 is negative";
		
	// now my own conversions
	bool b = false;
	char b2c = b;		// bool to char -- expect empty 
	int b2i = b; 		// bool to int  -- expect 0
	double b2d = b;		// bool to double -- expect 0
	
	//char c = 'c'; // c is already declared above
	int c2i = c;		// char to int -- expect 120
	double c2d = c;		// char to double -- expect 120
	
	int i = 6;
	double i2d = i + 0.1;		// int to double -- expect 6.1 -- add 0.1 else output is just 6
	
	cout << "\nb: " << b << "\nb2c: " << b2c << "\nb2i: " << b2i << "\nb2d: " << b2d;
	cout << "\nc: " << c << "\nc2i: " << c2i << "\nc2d: " << c2d;
	cout << "\ni: " << i << "\ni2d: " << i2d;
	
}