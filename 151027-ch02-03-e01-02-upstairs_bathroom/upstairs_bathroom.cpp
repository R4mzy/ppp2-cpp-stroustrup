#include "../res-files/std_lib_facilities.h"
// this application is meant to output instructions to the console to explain, in tedious detail, how to get to the upstairs bathroom.
// it will first give a brief description of the house being navigated

int main() {
// first describe the house
cout << "First, a loose description of the surroundings of our imaginary house: \n";
cout <<	"Starting from your seated position at the dining room table, you are facing across the table and down a passage. \nFive meters down the passage, are stairs to the left, then a landing and the stairs double back around and continue upward. \nAt the top of the stairs, is a door two meters to the right, which is the bathroom door. \n";

// painfully detailed instructions next
cout << "\nYou would like to go to the bathroom? Of course you would. Let me tell you exactly how. \n \n";

// getting up from the table
cout << "Put whatever is in your hands down on the table. Shuffle your chair backwards, and stand up. \n";

// leaving the table and approaching the passage
cout << "Turn ninety degrees to the left, and take two steps forward. Now turn ninety degrees to the right, and take five steps forward. Now turn ninety degrees to the right again, take two steps forward, and turn ninety degrees to the left. You should now be facing down the passage, with the table behind you. \n";

// head down the passage until you reach the stairs
cout << "Walk forward, stopping when in front of the stairway to your left. Turn ninety degrees to the left, and you will be facing the stairway directly ahead of you. \n";

// climb the stairs
cout << "Step forward, climbing the stairs and step onto the first landing, which is ten steps up. Turn ninety degrees to the right, take two steps forward, and turn ninety degrees to the right again. Step forward and climb the second flight of the stairs and onto the top landing. \n";

// enter the bathroom
cout << "Turn right, and walk forward until you come to a door in front of you. Grasp the door handle, turn it forty-five degrees anti-clockwise, and lightly push it forward while releasing the handle. If the room in front of you is dark, reach up with your left hand to the light switch on the left of the doorframe, about a meter and a half up, and flick the switch to an opposite alignment of what it currently is, to engage the bathroom light. Step forward two paces into the room. \n";

// you did it!
cout << "Congratulations, you have successfully navigated to the bathroom! \n";

// replacing keep_window_open() with cout + getchar() - see ch02-01's hello_world_practice.cpp and github issue #3 for why
cout << "\n Press <Enter> to continue... \n";
getchar();

// return a successfull exit
return 0;
}
