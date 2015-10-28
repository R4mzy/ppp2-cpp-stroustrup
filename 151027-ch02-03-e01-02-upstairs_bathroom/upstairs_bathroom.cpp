#include "std_lib_facilities.h"
// this application is meant to output instructions to the console to explain, in tedious detail, how to get to the upstairs bathroom.
// it will first give a brief description of the house being navigated

int main() {
// first describe the house
cout <<	"Starting from your seated position at the dining room table, you are facing across the table and down a passage. \nFive meters down the passage, are stairs to the left, then a landing and the stairs double back around and continue upward. \nAt the top of the stairs, is a door two meters to the right, which is the bathroom door. \n";

// painfully detailed instructions next


// replacing keep_window_open() with cout + getchar() - see ch02-01's hello_world_practice.cpp and github issue #3 for why
cout << "\n Press <Enter> to continue... \n";
getchar();

// return a successfull exit
return 0;
}
