// adding includes and such to use the standard library "directly"
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//inline void keep_window_open() { char ch; cin>>ch; }
//
// tried calling just a normal #include std_lib_facilities.h but get what seem to be header reference errors. Need to figure out how to install
// C++ headers to the system - at least I think that's what I need to do.
// 
// figured what I was doing to compile incorrectly - need to call g++ command and not gcc - trying again to include just std_lib_facilities.h
// rather than all the direct calls above using the correct compile command.
// final compile command is g++ -o hello_world.out ./hello_world.cpp
//
// welp, the C++ standard needs to be specified else errors are returned (compiling on Arch Linux x64). So, final compile command ends up:
// g++ -std=c++11 -o hello_world.out hello_world.cpp

#include "std_lib_facilities.h"

// rest of app code following includes...
int main() //C++ programs start by executing the function main
{
cout << "Hello, World!\n"; // output "Hello, World!"

// replacing keep_window_open() with getchar() - see more notes in hello_world_practice.cpp and the github issue notes
cout << "\n Press <Enter> to continue... \n";
getchar();

return 0;
}

