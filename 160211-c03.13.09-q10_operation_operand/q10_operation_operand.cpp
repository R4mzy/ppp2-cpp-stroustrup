#include "../res-files/std_lib_facilities.h"

/*
	Write a program that takes an operation followed by two operands and outputs the result. For example:
		+ 100 3.14
		* 4 5

	Read the operation into a string called operation and use an if-statement to figure out which operation the user wants, for example, if
	(operation=="+"). Read the operands 
	into variables of type double. Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

int main() {
	// tell the user wtf to input now
	cout << "Smooth operator, baby! Give me an operation, followed by two operands."
		<< "\nOperators should be +, -, *, /, plus, minus, mul, or div. Operands should be reg'la' floating point numbers.\n\n";
	// variables to hold our operator and operands
	string strGivenSymbol;
	double dblNumberOne;
	double dblNumberTwo;
	// receive the things, and write them into the variables
	cin >> strGivenSymbol >> dblNumberOne >> dblNumberTwo;
	// determine what to do, based on the operator supplied, and store that in another variable
	// this would be much neater if I could use OR's
	string charActualSymbol;
	// determine addition
	if (strGivenSymbol == "+") {
		charActualSymbol = '+';
	}
	if (strGivenSymbol == "plus") {
		charActualSymbol = '+';
	}
	// determine subtraction
	if (strGivenSymbol == "-") {
		charActualSymbol = '-';
	}
	if (strGivenSymbol == "minus") {
		charActualSymbol = '-';
	}
	// determine multiplication
	if (strGivenSymbol == "*") {
		charActualSymbol = '*';
	}
	if (strGivenSymbol == "mul") {
		charActualSymbol = '*';
	}
	// determine division
	if (strGivenSymbol == "/") {
		charActualSymbol = '/';
	}
	if (strGivenSymbol == "div") {
		charActualSymbol = '/';
	}
	
	// finally, perform the calculation and store the answer
	double dblAnswer;
	dblAnswer = dblNumberOne charActualSymbol dblNumberTwo;
	
	// display the calculation and answer
	cout << "Calculating: " << dblNumberOne << " " << strGivenSymbol << " " << dblNumberTwo << " = " << dblAnswer << '\n'; 
}

/*
	strange thing: I originally used single-quotes/apostrophes to enclose the operand characters, eg. '*' rather than "*". This seems to have been a problem, with the compiler 
	throwing tons of errors. Perhaps that kind of quote must be used with chars and not strings...
*/
