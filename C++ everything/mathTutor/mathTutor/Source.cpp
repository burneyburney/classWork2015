// Michael Burney
// 2/15/2015
// Math tutor, rand numbers.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

	// set time as variable
	unsigned seed = time(0); 

	// seed Random Number Generator
	srand(seed);

	// declare constants
	const int MIN_VALUE = 100; //minimum value
	const int MAX_VALUE = 999; //maximum value

	// declare variables
	double number1 = (rand() % (MAX_VALUE - MIN_VALUE )) + MIN_VALUE;
	double number2 = (rand() % (MAX_VALUE - MIN_VALUE )) + MIN_VALUE;
	double result;
	
	// instructions
		cout << " Add the 2 numbers together..." << endl;

	// display 2 random numbers on the screen
		cout <<" " << number1 << endl;
		cout <<"+" << number2 << endl;

	// add the 2 numbers together
		result = number1 + number2;

	// make the program pause
		cout << "Press any key to receive answer.";
		cin.get();

	// press a  Key for the program to display the solution
		cout << result << endl;

	return 0;
}// end of program

/*
Add the 2 numbers together...
232
+220
Press any key to receive answer.j
452
Press any key to continue . . .
*/