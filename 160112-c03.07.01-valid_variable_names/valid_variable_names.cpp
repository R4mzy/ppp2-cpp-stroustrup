#include "../res-files/std_lib_facilities.h"

	// my fixed version
int main()	// fix4: "Main()" to "main()"
{
	string s = "Goodbye, cruel world! ";	// fix1: "STRING" to "string"
	cout << s << '\n';	// fix2: "cOut" to "cout" ; fix3: "S" to "s"
}


/* // bad example version

int Main()
{
	STRING s = "Goodbye, cruel world! ";
	cOut << S << '\n';
}
*/