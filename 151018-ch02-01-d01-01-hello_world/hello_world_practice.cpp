#include "std_lib_facilities.h"

// tried including conio.h to use getch() before I'd learnt about it's MS-DOS specificity and non-standard-inclusion - see more comments below
//#include <conio.h>

int main() {
cout << "Hello, World!\n";

//keep_window_open();
// trying getchar() as opposed to keep_window_open() to test... hoping to just press enter or any key and have the program proceed
// rather than enter a char and then enter, then proceed
// getchar() kinda achieves what I want - enter immediately has the application but no continue on other keys
// getchar() but has no console output though so need to cout a message to press enter to proceed

cout << "\nPress <Enter> to continue... \n";
getchar();

// I'm going to stick with getchar() - I prefer this to keep_window_open() because it still pauses the program but I can continue
// with a single <Enter> and not require a character first.

// now trying getch(), but I think getchar() is the more Standard-friendly option...
//getch();
// welp, nevermind getch() - on further investigation it requires conio.h which is a Windows or MS-DOS header and not part of the C and C++
// standard libraries. conio.h has been ported for Linux in the ncurses and older curses headers but again, non-standard, so I'm avoiding it for
// now.

return 0;
}
