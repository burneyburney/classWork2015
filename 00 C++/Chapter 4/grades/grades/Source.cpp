//Michael Burney
//Display grades "Declare Grade as a character"
// 2/18/2015

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	// declare Grade as a characters
	char choice;
	cout << "Enter your choice (A, B, C, D, or F) \n";
	cin >> choice;

	switch (choice){
	case 'A': cout << "Excellent\n";
		break;
	case 'B': cout << "Very good\n";
		break;
	case 'C': cout << "Good\n";
		break;
	case 'D': cout << "Try Harder\n";
		break;
	case 'F': cout << "Try Harder\n";
		break;
	default: cout << "Invalid Choice! Please enter (A, B, C, D, or F)\n  **CASE SENSITIVE**\n" ;
		break;
	}
	return 0;
}//end of program

/*******************************************************
Enter your choice (A, B, C, D, or F)
A
Excellent
Press any key to continue . . .
********************************************************
Enter your choice (A, B, C, D, or F)
B
Very good
Press any key to continue . . .
*******************************************************
Enter your choice (A, B, C, D, or F)
C
Good
Press any key to continue . . .
********************************************************
Enter your choice (A, B, C, D, or F)
D
Try Harder
Press any key to continue . . .
*********************************************************
Enter your choice (A, B, C, D, or F)
F
Try Harder
Press any key to continue . . .
*********************************************************
Enter your choice (A, B, C, D, or F)
z
Invalid Choice! Please enter (A, B, C, D, or F)
**CASE SENSITIVE**
Press any key to continue . . .
*********************************************************/