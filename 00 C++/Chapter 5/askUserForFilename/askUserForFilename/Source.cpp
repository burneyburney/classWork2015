#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	ifstream inputFile;
	string name, askUser;

	cout << "Input name of file you would like to display: ";
	cin >> askUser;

	inputFile.open(askUser);
	
	while (inputFile >> name){	 // Read name from the file
		cout << name << endl;	 // Display names 
	}
	
	inputFile.close();			// close the file
	return 0;

}//end of program