//Michael Burney
//3/16/2015
//This program writes data to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	//create a file to open 
	ofstream outputFile;
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file.\n";

	//write four names to the file.
	outputFile << "Bach";
	outputFile << "Beethoven";
	outputFile << "Mozart";
	outputFile << "Schubert";

	//close the file
	outputFile.close();
	cout << "Done.\n";
	return 0;


}//end of program

/*****************************************
*////////////////////////////////////////*
/////////////////////////////////////////*
/////////Writes Data to a file //////////*
////////Then closes it///////////////////*
////////Its automatically saved//////////*
/////////////////////////////////////////*
/////////////////////////////////////////*