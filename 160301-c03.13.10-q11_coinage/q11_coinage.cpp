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

*/


int main() {
	// ask and store how many of each coin the user has
	cout << "\nHey dude, wanna get takeout? How much money you got on you?\n";
	// pennies (1-cent)
	int pennies;
	cout << "\nHow many pennies you got?\n";
	cin >> pennies;
	// nickels (5-cent)
	int nickels;
	cout << "\nAnd how many nickels?\n";
	cin >> nickels;
	// dimes (10-cent)
	int dimes;
	cout << "\nYeah and dimes?\n";
	cin >> dimes;
	// quarters (25-cent)
	int quarters;
	cout << "\nGive me the one-fourths, the quarters.\n";
	cin >> quarters;
	// half dollars (50-cent)
	int half_dollars;
	cout << "\nWill you meet me half-dollar way?\n";
	cin >> half_dollars;
	// one-dollars (100-cent)
	int one_dollars;
	cout << "\nLast and largest, one-dollars?\n";
	cin >> one_dollars;
	
	// print out the users coins
	cout << "\n\nOkay so we got, uhh, " << pennies << " pennies.\n"
		<< "And then " << nickels << " nickels and " << dimes << " dimes.\n"
		<< "Plus, like " << quarters << " quarters.\n"
		<< "Then, let's see, " << half_dollars << " half-dollars.\n"
		<< "Lastly, " << one_dollars << " one-dollars.\n";
	
	// print out the total cents balance
	int total_cents = (pennies) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (one_dollars * 100);
	cout << "\n So that gives us a total of " << total_cents << " cents. Sweet.";
}