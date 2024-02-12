/*
Problem statement: Write a program that mimics a calculator. The program should take as input two numbers and 
the opeation to be performed. It should then output the numbers, the operator and the result.
author: mert
date: 2/11/24
*/
#include <iostream>
using namespace std;

int main(){
    bool isValid = true;
    float number1, number2, result;
    char op;

    cout << "Enter number1, number2, and the operator on the right order please. \n";
    cin >> number1 >> number2 >> op;

    if(op=='+'){
        result = number1 + number2;
    }else if(op=='-'){
        result = number1 - number2;
    }else if(op=='*'){
        result = number1 * number2;
    }else if(op=='/'){
        if(number2 == 0){
            isValid = false;
            cout << "You can't put 0 on the denominator.";
        }else {
            result = number1 / number2;
        }
    }else{
        isValid = false;
        cout << "This operation can't be done."; 
    }

    if(isValid == true){
        cout<< "The result is: " << number1 << " " << op << " " << number2 << " " << "=" << " " << result;
    }
    return 0;
}