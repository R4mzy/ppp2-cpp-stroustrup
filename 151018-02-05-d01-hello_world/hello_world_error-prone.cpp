// this source meant to test the behaviour of g++ compiler when there are (syntactical) errors in the source code

// test01 - commenting #include line to pretend it was left out...
// test02 - include but intentionally misspell std_lib_facilities.h
// test03 - "forget" to terminate string on line 9 with a "
#include "stdlib_facilities.h"

int main() {
	cout << "Hello, World!\n;
	keep_window_open();
	return 0;
}
