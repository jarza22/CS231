/*
Manipulators / Output Functions
Author: kma
Date: Jan 26, 2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
         // endl manipulator
         cout << "JSU" << endl; // end line
         cout << "Jacksonville\n"; // \n --> added a new line

         // create variables
         double salary = 345.456;
         double working_hours = 40.00;

         // real numbers
         // fixed notation: 1345.78
         // scientific notation: 1345.78 = 1.34578 * 10^3 = 1.34578E3
         // 15678.345 = 1.5678345 * 10^4 = 1.5678345E4
         // printing a real number in scientific notation
         cout << scientific;
         cout << "Salary: " << salary << endl;

         // printing a real number in fixed notation
         cout << fixed;
         cout << "Salary: " << salary << endl;

         // showpoint: ask to print the decimal point
         // setprecision() tell how many digits to print after the decimal point
         cout << showpoint;
         cout << setprecision(2) << salary << endl;
         cout << setprecision(4) << working_hours << endl;

         // setw() - set width
         int age = 65;
         //cout << "Age:" << setw(10) << age << endl;
         //cout << "Age:" << setw(10) << left << age << endl;
         cout << "Age:" << setw(10) << setfill('*') << left << age << endl;
         // right

         // getline()
         // "Jacksonville State University" 
         string name;
         getline(cin, name);
         cout << "Name is: " << name << endl;



         return 0;

}