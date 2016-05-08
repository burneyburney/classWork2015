// Michael Burney
// classwork use random numbers
// 2/9/2015


#include <iostream>
using namespace std;

int main()
{
	double length, width, height, volume, profit, cost, charge;
	const double COST_PER_CUBIC_FOOT = .23;
	const double CHARGE_PER_CUBIC_FOOT = .5;

	//Enter variables
	cout << "Enter Length: ";
	cin >> length;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter Height: ";
	cin >> height;

	//calculations
	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
	charge = volume * CHARGE_PER_CUBIC_FOOT;
	profit = charge - cost;

	//display results on screen
	cout << "Volume: " << volume << endl;
	cout << "The Cost is: $" << cost << endl;
	cout << "The Charge is: $" << charge << endl;

	return 0;


}
// end of program

/*********************************************
Enter Length: 99
Enter Width: 88
Enter Height: 77
Volume: 670824
The Cost is: $154290
The Charge is: $335412
Press any key to continue . . .
***********************************************/