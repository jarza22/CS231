/*
File Input/Output
Author: kma
Date: Jan 26, 2024
*/

# include <iostream>
# include <fstream>

using namespace std;

int main (){
        // declare variables
        string fName, lName;
        float grade1, grade2;

        ifstream inFile;
        ofstream outFile;

        // open files
        inFile.open("grades.txt");
        outFile.open("grades-copy.txt");

        // reading files
        inFile >> fName >> lName >> grade1 >> grade2;

        // writing into files
        cout << fName << " " << lName << " " << grade1 << " " << grade2 << " " ;

        outFile << fName << " " << lName << " " << grade1 << " " << grade2 << " ";




}
