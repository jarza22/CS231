/*
* Problem Statement: Given the temp in
* Fahrenheit, convert it into Kelvin.
* Author: kma
* Date: Jan 22, 2024

*/
#include <iostream>
using namespace std;

int main(){
    // Step 1) We introduced the variables.
    float fahrenheit, kelvin;

    // Step 2) We got input values.
    cout << "Please enter the Fahrenheit value: \n";
    cin >> fahrenheit;

    // Step 3) We used formulas.
    kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    // also / 1.8 can be used on this formula, both formulas would give the same result.

    // Step 4) We printed results.
    cout <<"The Fahrenheit value that you gave is: " << fahrenheit << endl;
    cout <<"The Kelvin value is: " << kelvin << endl;

}

// const float PI = 3.14159; (We should add const to the unchangeables to imply that.)
//(In this cases, we also should make it uppercase.)