/*
problem statement: calculate perimeter and area of 
given its length and width
Author: kma
Date: 17/1/2024

Notes: C++ was designed by Stroupstrup (Bell Labs) in 1980s.
int (8), char('A'), string("JSU"), bool, float(single precision)/double (double precision)(6.76)
Significant digits: Digits located after decimal point.
data type: Simple(integral, float, enum), structured, pointers
variable: double pi = 3.14159;
constant: const double PI = 3.14159;
subprogram / functions
syntax rules:
semantic rules: meaning of the program
comments
token: is the smallest unit of a program; int, +, ....
reserved words: return, int, ...
identifier: names used in program; height@(not valid), 1height(not valid), john height(not valid), height(valid), johnHeight(valid)
case sensitive
assignment statement: x = 5; y = y + 5;, y *= 5; y = y * 5;
arithmetic operators: +, -, *, /, 7%5 = 2
order of precedence: 7 * (8 + 6) - 2 / 5
type conversion: explicit: (int)45.4 --> 45; implicit 
*/
#include <iostream>
using namespace std;

int main(){ // Allman style
    // step0: introduce variables
    float length;
    float width;
    float perimeter, area;
    // step1: get input values
    // length= 100.98;
    // width= 50.78;

    // >> stream extraction operator
    //cin >> length;
    //cin >> width;
    cout << "Enter length and width: \n";
    // escape sequences: '\n', '\t'
    cin >> length >> width;

    // step2: use formulas
    perimeter = 2 * (length + width);
    area = length * width;
    // step3: print results
    cout <<"Perimeter = " << perimeter << endl;
    cout <<"Area = " << area << endl;

    return 0;
}