// adding includes and such to use the standard library "directly"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// tried calling just a normal #include std_lib_facilities.h but get what seem to be header reference errors. Need to figure out how to install
// C++ headers to the system - at least I think that's what I need to do.
// #include "std_lib_facilities.h"
int main() //C++ programs start by executing the function main
{
cout << "Hello, World!\n"; // output "Hello, World!"
keep_window_open(); // wait for a character to be entered -Windows-particular
return 0;
}

