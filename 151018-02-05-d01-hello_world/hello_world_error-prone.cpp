// this source meant to test the behaviour of g++ compiler when there are (syntactical) errors in the source code

// test01 - commenting #include line to pretend it was left out...
// test02 - include but intentionally misspell std_lib_facilities.h
// test03 - "forget" to terminate string on line 9 with a "
// test04 - call main() function using "integer" instead on "int" (this has to do with the expected result of the function)
// test05 - use only one < for directing the "input" for cout - one might expect this to make cout want to "replace" the console? at least if
//		writing a file that might be the case (ie. < is replace where << would be append)

#include "std_lib_facilities.h"

int main() {
	cout < "Hello, World!\n";
	keep_window_open();
	return 0;
}
