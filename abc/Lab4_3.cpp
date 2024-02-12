/*
Conditional Operator
Author: mert
Date: feb 2, 2024
*/
#include <iostream>
#include <cassert>

using namespace std;
int main(){
        int p = 10, q = 25, max;

        // logic of what we did on down part of code.
        /*if(p>=q){
             max = p;
        } else {
             max = q;
        }*/
        
        // using conditional operator ?:
        max = (p>=q)?p:q;
        // if the inside of parenthesis is true, system gets the variable after question mark, if it's false, gets the variable after colon.
        // x = ((p>5)&& (q < 25) ? 87 : 100);        && --> and    || --> or    ! --> not 
        // for && to become true, both should be true.
        // for || to become true, at least one of them should be true.
        cout << "Max = " << max << endl;

        assert((p>5)||(q < 25)); 
        // assert() checks the condition of correctness.
        cout << "JSU" << endl;
        
        
        return 0;
}
