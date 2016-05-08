#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double positiveInteger;
	double x = 1;
	double sum = 0;

	//enter integer
	cout << "Please input a positive Integer." << endl;
	cin >> positiveInteger;

	//loop statement
	if (positiveInteger >= 1){
		for (int i = x; i <= positiveInteger; i++)
		{
		sum = sum + i;
		cout << sum << endl;
		}
		cout << sum << endl;
							}

	else{
		cout << "Please enter a positive integer next time." << endl;
		}
	return 0;
}// end of program

/******************************************************************
Please input a positive Integer.

20
1
3
6
10
15
21
28
36
45
55
66
78
91
105
120
136
153
171
190
210
210
Press any key to continue . . .
**********************************************************************/