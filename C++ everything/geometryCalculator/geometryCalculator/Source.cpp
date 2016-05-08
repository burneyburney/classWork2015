//Michael Burney
// Geometry Calculator
//switch statement 

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	// declare variables
	int rectangle_area, radious, area, width, length, height;
	double circle_area, triangle_area;
	double PI = 3.14;

	//options list
	cout << "Enter 1 to caluclate the area of a circle" << endl;
	cout << "Enter 2 to calculate the area of a rectangle" << endl;
	cout << "Enter 3 to calculate the area of a triangle" << endl;
	cout << "Enter 4 to end the program" << endl;
	
	//make it loop so 1-4 are the only options.
	while (1 == 1)
	{
		cout << "Choose Your option: ";
		cin >> area;
		cout << endl;

		//switch statment tree
		switch (area)
		{
		case 1:
			cout << "enter the radious of a circle\n";
			cin >> radious;
			circle_area = PI * radious * radious;
			cout << "area of the circle is " << circle_area << endl;
			break;

		case 2:
			cout << "enter the width of a rectangle" << endl;
			cin >> width;
			cout << "enter the length of the rectangle" << endl;
			cin >> length;
			cout << "enter the area of the rectangl" << endl;
			rectangle_area = width*length;
			cout << "Rectangular Area =" << triangle_area << endl;
			break;

		case 3:
			cout << "enter the length of a triangle" << endl;
			cin >> length;
			cout << "enter the height of a triangle" << endl;
			cin >> height;

			triangle_area = length * height / 2;

			cout << "Triangle Area=" << triangle_area << endl;

			break;

		case 4:
			cout << "Program done." << endl;
			return 0;
		}
	}
}// end of program

/*
Enter 1 to caluclate the area of a circle
Enter 2 to calculate the area of a rectangle
Enter 3 to calculate the area of a triangle
Enter 4 to end the program
Choose Your option: 1

enter the radious of a circle
5
area of the circle is 78.5
Choose Your option:

*/