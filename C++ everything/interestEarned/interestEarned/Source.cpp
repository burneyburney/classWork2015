// Michael Burney
// Interest Earned problem
// ex 18 pg 145

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	//declare variables
	double principal;
	double rate;
	int T;
	double amount;
	double interest;
	double interestAmount;

	//ask user for amounts
	cout << setprecision(2) << fixed;
	cout << "Enter the principal: ";
	cin >> principal;
	cout << "Enter the interest rate: ";
	cin >> rate;
	cout << "Enter the number of times the interest is compounded: ";
	cin >> T;

	//calculations
	amount = principal * pow((1 + (rate / T)), T);
	interestAmount = rate * 100;
	
	//output results on screen as a report 
	cout << "Interest Rate: " << "\t\t\t" << rate <<"%"<<endl;
	cout << "Times Compounded: " << "\t\t" << T << endl;
	cout << "Principal: " << "\t\t\t" << principal << endl;
	cout << "Interest: " << "\t\t\t" << interestAmount << endl;
	cout << "Amount in Savings: " << "\t\t" << amount << endl;

	return 0;
}// end of program

/*
Enter the principal: 1000
Enter the interest rate: 4.25
Enter the number of times the interest is compounded: 12
Interest Rate:                  4.25%
Times Compounded:               12
Principal:                      1000.00
Interest:                       425.00
Amount in Savings:              38024.67
Press any key to continue . . .
*/