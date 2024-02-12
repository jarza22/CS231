/*
File Input/Output
Control Structure - Selection(if-else, switch)
Author: mert
Date: jan 29, 2024
*/

#include <iostream>
#include <fstream>
using namespace std;

int main (){
        // Declare variables
        ifstream inputFile; // input file stream variable
        ofstream outputFile; // output file stream variable
        char op; // operator variable
        float number, result;
        bool isValid = true; 

        // open files
        inputFile.open("Lab4_1_Data.txt");
        outputFile.open("Lab4_1_Output.txt");

        // >>: stream extraction operator,      << stream insertion operator
        // read from the file
        inputFile >> op >> number;

        cout << op << " " << number << endl;

        // Implement logic
        // ==, !=, <=, >=, <, > : comparison operators
        // 5 <= 9
        if(op == '+'){
                result = 5 + number;
        } else if(op == '*'){
                result = 5 * number;
        } else if(op == '-'){
                result = 5 - number;
        } else if(op == '/'){
                result = 5 / number;
        } else {
                isValid = false;
        }

        // Print result
        if (isValid == true){
            cout << " The result is: " << "5 " << op << " " << number << " = " << result;
            outputFile << " The result is: " << "5 " << op << " " << number << " = " << result;
        } else {
             cout << "Not a valid operator" << endl;
             outputFile << "Not a valid operator" << endl;
        }

        // op = '-'; // assignment
        // == : checking if the right hand side = 




    return 0;
}