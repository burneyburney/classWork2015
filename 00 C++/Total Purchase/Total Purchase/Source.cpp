// Programmer: Michael Burney
// 1 - 29 - 2015
// pg 80 #8
// Total Purchase of 5 items. 

#include <iostream>
using namespace std

int main()
{
	// hold the price of the 5 items in 5 variables
	int item1, item2, item3, item 4, item 5, subtotal, taxTotal, total;

	// items 1 - 5 
	 const float item1 = 15.95;
	 const float item2 = 24.95;
	 const float item3 = 6.95;
	 const float item4 = 12.95;
	 const float item5 = 3.95;



	// display each items price on screen
		cout << "item1 = " << item1 << endl;
		cout << "item2 = " << item2 << endl;
		cout << "item3 = " << item3 << endl;
		cout << "item4 = " << item4 << endl;
		cout << "item5 = " << item5 << endl;

		//calculate subtotal
		subtotal = item1 + item2 + item3 + item 4 + item5;
		
		// display subtotal of the sale
		cout << "subtotal is " << subtotal << endl;



		//calculat taxTotal
		double taxTotal = subtotal * 0.07;

		// display amount of sales tax (7%)
		cout << "Sales tax amount is " << taxTotal << endl;



		//calculate total
		total = taxTotal + subtotal;

		// display total
		cout << "Total amount is " << total << endl;

		return 0;


}