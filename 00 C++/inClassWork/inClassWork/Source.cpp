// Michael Burney
// This program gets a series of test scores and 
// calculates the average of the score with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int SIZE = 4;
	double testScores[SIZE],
		total,
		lowestScore,
		average;

	// Set up numeric output formatting.
	cout << fixed << showpoint << setprecision(1);

	//Get the test scores from the user
	getTestScores(testScores, SIZE);

	// Get the total of the test scores.
	total = getTotal(testScores, SIZE);

	// Get the lowest test score.
	lowestScore = getLowest(testScores, SIZE);

	// SUbtract the lowest score fromt he total.
	total -= lowestScore;

	// Calculate the average Divide by 3 because the lowest test score was dropped.
	average = total / (SIZE - 1);

	// Display the average.
	cout << "The average with the lowest score "
		<< "dropped is " << average << ".\n";

	return 0;
} // end of MAIN







void getTestScores(double scores[], int size)
{
	// Loop counter
	int index;

	// Get each test score.
	for (index = 0; index <= size - 1; index++)
	{
		cout << "Enter test score number "
			<< (index + 1) << ": ";
		cin >> scores[index];
	}
}







double getTotal(const double numbers[], int size)
{
	double total = 0; // Accumulator

	// Add each element to total.
	for (int count = 0; count < size; count++)
		total += numbers[count];

	// Return the total .
	return total;
}







double getLowest(const double numbers[], int size)
{
	double lowest; // To hold the lowest value

	// Get the first array's first element.
	lowest = numbers[0];

	// Step through the rest of the  array. When a value less than
	// lowest is found, assign it
	// to lowest.
	for (int count = 1; count < size; count++)
	{
		if (numbers[count] < lowest)
			lowest = numbers[count];
	}

	// Return the lowest value
	return lowest;
}


