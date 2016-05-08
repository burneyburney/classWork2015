// Michael Burney
// program 6-9
// 3/25/2015

// This program demonstrates that changes to a function parameter
// have no effect on the original argument.

#include <iostream>
using namespace std;

// Function prototype
void changeMe(int);


int main()
{
	int number = 12;

	// Display the value in number.														(HAPPENS FIRST)
	cout << "number is " << number << endl;

	// Call changeMe, passing the value in number as an argument.
	changeMe(number);

	// display the value in number again.												(HAPPENS LAST)
	cout << "Now back in main again, the value of ";
	cout << "number is " << number << endl;
	return 0;
}

	void changeMe(int myValue)															//(HAPPENS SECOND)
	{
		//Change the value of myValue to 0.
		 myValue = 0;

		//Display the value in myValue.
		cout << "Now the value is " << myValue << endl;
	}