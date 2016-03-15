#include "../res-files/std_lib_facilities.h"

/*	
	part one:
	Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half 
	dollars (50-cent coins), and one-dollar coins (100-cent coins). Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” 
	Then your program should print out something like this:

		You have 23 pennies.
		You have 17 nickels.
		You have 14 dimes.
		You have 7 quarters.
		You have 3 half dollars.
		The value of all of your coins is 573 cents.

	Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in 
	dollars and cents, i.e., $5.73 instead of 573 cents.
	
	part two:
	Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in 
	dollars and cents, i.e., $5.73 instead of 573 cents.
*/


int main() {
	// ask and store how many of each coin the user has
	cout << "\nHey dude, wanna get takeout? How much money you got on you?\n";
	// pennies (1-cent)
	double pennies;
	cout << "\nHow many pennies you got?\n";
	cin >> pennies;
	string pennies_grammar = " pennies";
	if (pennies == 1) {
		pennies_grammar = " penny";
	}
	
	// nickels (5-cent)
	double nickels;
	cout << "\nAnd how many nickels?\n";
	cin >> nickels;
	string nickels_grammar = " nickels";
	if (nickels == 1) {
		nickels_grammar = " nickel";
	}
	
	// dimes (10-cent)
	double dimes;
	cout << "\nYeah and dimes?\n";
	cin >> dimes;
	string dimes_grammar = " dimes";
	if (dimes == 1) {
		dimes_grammar = " dime";
	}
	
	// quarters (25-cent)
	double quarters;
	cout << "\nGive me the one-fourths, the quarters.\n";
	cin >> quarters;
	string quarters_grammar = " quarters";
	if (quarters == 1) {
		quarters_grammar = " quarter";
	}
	
	// half dollars (50-cent)
	double half_dollars;
	cout << "\nWill you meet me half-dollar way?\n";
	cin >> half_dollars;
	string half_dollars_grammar = " half-dollars";
	if (half_dollars == 1) {
		half_dollars_grammar = " half-dollar";
	}
	
	// one-dollars (100-cent)
	double one_dollars;
	cout << "\nLast and largest, one-dollars?\n";
	cin >> one_dollars;
	string one_dollars_grammar = + " dollars";
	if (one_dollars == 1) {
		one_dollars_grammar = " one-dollar";
	}
	
	// print out the users coins
	cout << "\n\nOkay so we got, uhh, " << pennies << pennies_grammar << ".\n"
		<< "And then " << nickels << nickels_grammar << " and " << dimes << dimes_grammar << ".\n"
		<< "Plus, like " << quarters << quarters_grammar << ".\n"
		<< "Then, let's see, " << half_dollars << half_dollars_grammar << ".\n"
		<< "Lastly, " << one_dollars << one_dollars_grammar << ".\n";
	
	// print out the total cents balance
	double total_cents = (pennies) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (one_dollars * 100);
	double total_dollars = total_cents / 100.0;
	cout << "\n So that gives us a total of " << total_cents << " cents. Better known as $" << total_dollars << ". Sweet.";
}