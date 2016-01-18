#include "../res-files/std_lib_facilities.h"

int main() {
// one
// i copied section one from the ebook, in Windows, and seems that left a number of weird characters in the copy.
// i deleted the "tabs", that actually copied as many spaces, and the errors went away.
// see the compile log for the errors.
	cout << "Enter the name of the person you want to write to.\n";
	string first_name;	// first_name is a variable of type string
	cin >> first_name;	// read characters into first_name
// two
	cout << "\nDear " << first_name << ",\n"
		<< "\n	How are you? I am totes amaze and 'ish is fabulatory. Well except for the bit about you not being here.\n"
		<< "	But besides that, things are okay. You said to update you on stuff so, y'know, this is me doing that.\n"
		<< "	I'm studying some C++, thanks to Stroustrup. I feel like it's a good language to get going on. It's been good so far.\n";

// three
	cout << "\nEnter the name of a friend to make reference to.\n";
	string friend_name;		// store a friends name
	cin >> friend_name;		// get a friends name
	
	// talk about a friend
	cout << "\n	By the way, have you caught a peek at " << friend_name << " lately?\n";

// four
	cout << "\nSex your friend - m or f.\n";
	char friend_sex = 0;		// store the friends sex
	cin >> friend_sex;		// get the friends sex

	// something more personal for the friend
	if (friend_sex == 'm') {
		cout << "\n	By all that is hawt, he is looking positively ravishing lately.\n";
	}
	if (friend_sex =='f') {
		cout << "\n	Dear sweet, flowing curves - is she looking transcendently stunning or what?\n";
	}

// five
	cout << "\nHey, how old is " << first_name << " anyway?\n";
	int age;
	cin >> age;
	if (age <= 0 && age >= 110) {
		simple_error("Sod off, mate.");
	}
	cout << "\n	Oh! How did you like that little gift I sent for your birthday? Teehee, I hope you love it!\n"
		<< "	Man, I can hardly believe we're at " << age << ", huh? Lady Time sure does fly.\n";
// six
	if (age < 12) {
		cout << "	You know what? Maybe you shouldn't open that gift just yet... \n"
			<< "	Bring it with you next time you come over, and we'll open it together instead!\n";
	}
	if (age == 17) {
		cout << "	Things are stressful, I know, so use that little box and relax.\n"
			<< "	It's perfectly natural and everybody does it so don't let them bullshit you.\n";
	}
	if (age > 70) {
		cout << "	And, you know, I don't know whether I ever really said it before... Thank you.\n"
			<< "	What you taught me helped me change my life and things have really turned around for us, so thank you.\n";
	}
// seven
	cout << "\n 	Well that's me for now. Stay sexy,\n"
		<< '\n' << '\n' << "	Lea\n";
}
