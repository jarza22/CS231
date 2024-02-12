/*
Problem statement: Write a complete program that needs eight float numbers from a file (myfile.in) and writes them to the screen,
four numbers per output line and their sum. The file is organized one value to a line.
Format the output of decimal numbers to two decimal places, right-justified and each number is located in a total of 12 positions.
author: mert
date: 2/11/24
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main (){
    // In this step, we are declaring variables.
    float num1, num2, num3, num4, num5, num6, num7, num8;
    float sum1, sum2;
    ifstream inputFile;
    // In here, we should open the file.
    inputFile.open("myfile.in");
    // Now we should make the system read the numbers from that file.
    inputFile >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8;
    // In the next step, we should set the calculation settings.
    sum1 = num1 + num2 + num3 + num4;
    sum2 = num5 + num6 + num7 + num8;
    // At this step, we can print the results.
    cout << fixed << showpoint << setprecision(2);
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << " Sum = " << setw(12) << right << sum1 << endl;
    cout << num5 << " " << num6 << " " << num7 << " " << num8 << " Sum = " << setw(12) << right << sum2 << endl;
    // In this last step, we should close the file.
    inputFile.close();

}