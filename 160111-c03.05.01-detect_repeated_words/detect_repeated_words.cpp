#include "../res-files/std_lib_facilities.h"

int main() {
	string previous = "n/a";	// previous word; initialised to "not a word"
	string current;			// current word
	while (cin>>current) {	// read a stream of words
		cout << "previous: " << previous << '\n';		// my own addition to display previous...
		cout << "current: " << current << '\n';			// ... and current before evaluation for operational clarity
		if (previous == current)	// check if the word is the same as last
			cout << "\nrepeated word: " << current << '\n';
	previous = current;
	}
}

// hot tip - the Win char for EOF is Ctrl-Z - for *nix it is Ctrl-D

/*
playing computer... (ignoring my adds)
example input: the cat cat jumped

previous = " "
while (current = cin >> "The") {
	if (" " == "The") is false so do nothing
}

previous = "The"
while (current = cin >> "cat") {
	if ("The" == "cat") is false so do nothing
}

previous = "cat"
while (current = cin >> "cat") {
	if ("cat" == "cat") is true so
		cout << repeated word: cat
}

previous = "cat"
while (current = cin >> "jumped") {
	if ("cat" == "jumped") is false so do nothing
}

end

done playing computer
*/