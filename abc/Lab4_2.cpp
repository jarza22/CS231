/*
Control Structure - Selection (switch)
Author: mert
Date: jan 31, 2024
*/
#include <iostream>
#include <cassert>
using namespace std;

int main (){
        // switch 
        // switch statement is for selecting one of many code blocks
        // the switch statement is evaluated once.
        // the value of the expression is compared with the values of each case.
        // if there is a match, the associated block is executed.
        // the break and default keywords are optional. 
        
        char op; // integral type 
        float number, result;
        bool isValid = true;

        cout << "Enter an expression in this format: operator operand" << endl;
        cin >> op >> number;

        // integral type: char, int, enum 
        // you can't use string with switch statement

        // break stops the switching if it has seen the correct case.
        // we can use the switch to select one of many code blocks to be executed.
        switch(op){ // case var must be of integral type
                case '+':
                    result = 10 + number;
                    break; // it breaks out the switch block
                case '-':
                    result = 10 - number;
                    break; // it breaks out the switch block   
                case '*':
                    result = 10 * number;
                    break; // it breaks out the switch block 
                case '/':
                    // bool assert(boolean expression)
                    // is useful in stopping execution when certain conditions (or errors) occur.
                    // true (1) does nothing and continues normal execution of the program.
                    // false(0) : the assert prints a message and terminate the program.
                    assert(number != 0);
                    // assert() checks the condition of correctness
                    result = 10 / number;
                    break; // it breaks out the switch block
                default:
                    cout << "Invalid operator!" << endl;
                    isValid = false;
                    // understand the importance of break better
        }
        if(isValid){ // isValid == (already) true
                cout << "The result is: " << result << endl;
        }

        

        return 0;
}