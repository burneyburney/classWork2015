// Michael Burney
// pg 222. 14
// Bank charges

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declare variables
	double  checks = 0,
			totalfee = 0,
			fee = 10,
			fee1 = .1,
			fee2 = .08,
			fee3 = .06,
			fee4 = .04,
			first = 0,
			second = 0,
			third = 0,
			fourth = 0;

	// create bool variable for ending of program
	bool closing = true;

	//ask for number of checks written
	cout << "Please enter the number of checks you wrote for the past month.\n";
	cin >> checks;

	// if user inputs negative number, gives user following message and sets closing to false
	if (checks < 0)
	{
		cout << "WARNING! OVERDRAWN ACCOUNT!\n";
		closing = false;
	}

	// monthly bank fee calculations
	if (checks <20)
		first = (checks * fee1);
	if (checks >= 20 && checks <= 39)
		second = (19 * fee1) + ((checks - 19) * fee2);
	if (checks >= 40 && checks <= 59)
		third = (19 * fee1) + (20 * fee2) + ((checks - 39) * fee3);
	if (checks >= 60)
		fourth = (19 * fee1) + (20 * fee2) + (20 * fee3) + ((checks - 59) * fee4);

	// adds all fees together
	totalfee = (fee + first + second + third + fourth);

	// if closing true, show total fees
	if (closing)
		cout << "Your total monthly Bank Fees are $" << fixed << setprecision(2) << totalfee << ".\n";

	return 0;
	
}
/*
Please enter the number of checks you wrote for the past month.
50
Your total monthly Bank Fees are $14.16.
Press any key to continue . . .
*/