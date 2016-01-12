#include "../res-files/std_lib_facilities.h"

int main() {
	int number_of_words = 0;
	string previous = " "; 	// not a word
	string current;
	while (cin>>current) {
		++number_of_words; 	// increase word count by incrementing
							// "number_of_words += 1" and "number_of_words = number_of_words + 1" would also work
		if (previous == current) 
			cout << "word number " << number_of_words
				<< " repeated: " << current << '\n';
		previous = current;
	}
}

	//	"Don’t start from scratch unless you really have to."