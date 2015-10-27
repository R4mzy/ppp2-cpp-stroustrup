// hello_programming - the original hello_world app from 02-d01 but adapted to display alternative output
#include "std_lib_facilities.h"

int main() //C++ programs start by executing the function main
{
// output line1 "Hello, programming!"
// output line2 "Here we go!"
cout << "Hello, programming! \nHere we go! \n";
keep_window_open(); // wait for a character to be entered -Windows-peculiarity
return 0;
}

// 1st build
// original cout line was "cout << "Hello, programming! \n Here we go!;"
// output of this was bad-looking, and no line after to seperate output and the "press any key" prompt.

// 2nd build
// output using "cout << "Hello, programming! \nHere we go! \n";" is nicely formatted
// I'd like to figure out how to have the program exit on just any key press, rather than enter a key and <enter>
// whatever that solution is, it should be compatible with Windows too.
