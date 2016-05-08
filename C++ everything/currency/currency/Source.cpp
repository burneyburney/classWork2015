//Michael Burney
//use precision of 2
//Dollar to Yen and Euro conversion

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// 1 dollar = 98.93 yen
	// 1 dollar = 0.74 euros

	//declare variables
	double dollarAmount;
	double YEN_PER_DOLLAR = 98.93;
	double EUROS_PER_DOLLAR = 0.74;

	//enter dollarAmount
	cout << "Enter Dollar amount to convert to Yen and Euros!" << endl;
	cin >> dollarAmount;

	// calculations
	double yenAmount = dollarAmount * YEN_PER_DOLLAR;
	double euroAmount = dollarAmount * EUROS_PER_DOLLAR;

	//display results on screen
	cout << "Yen = " << fixed << setprecision(2)<< yenAmount << endl;
	cout << "Euro = " << fixed << setprecision(2)<< euroAmount << endl;

	return 0;
}
//end of program

/*****************************************************
Enter Dollar amount to convert to Yen and Euros!
55.55
Yen = 5495.56
Euro = 41.11
Press any key to continue . . .
*****************************************************/