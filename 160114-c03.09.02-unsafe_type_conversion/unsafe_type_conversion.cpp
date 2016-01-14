#include "../res-files/std_lib_facilities.h"

int main() {
	int a = 20000;
	char c = a;		// try to squeeze a large int into a small char
	int b = c;		// and back to int again 
	
	// conversion of 20000 to a char will just equal a whitespace
	// a whitespace is 32 in integer, and you should see c = a whitespace and b = 32
	cout << "a: " << a << " and c: " << c << " and b: " << b << '\n';
	if (a != b)		// != means "not equal" 
		cout << "oops!: " << a << "!=" << b << '\n';
	else
		cout << "Wow! We have large characters!\n";
}