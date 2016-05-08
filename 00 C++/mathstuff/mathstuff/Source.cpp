// Michael Burney
// pg 136. 5. math problem
// 2/11/2015



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declare variables
	double c;
	double a;
	double b;
	double k;

	// ask variable amount
		cout << "Enter value of A: ";
		cin >> a; 
		cout << "Enter the amount of B: ";
		cin >> b; 
		cout << "Enter the amount K: ";
		cin >> k;

	// calculations 
		c = pow(a, 3.0) / (pow(b, 2.0)*pow(k, 4.0));

	// display answer on screen 
		cout << "The answer is: " << c << endl;

		return 0;

}
// end of program