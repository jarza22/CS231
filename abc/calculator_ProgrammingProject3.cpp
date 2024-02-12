#include <iostream>
// To getting data from file possible, we should add fstream.
#include <fstream>

using namespace std;

int main(){
    // In this step, we are declaring variables.
    bool isValid = true;
    int operand1, operand2;
    float result;
    char op;
    ifstream inputFile; // input file stream variable
    ofstream outputFile; // output file stream variable

    // In this step, we are opening files.
    inputFile.open("input.txt");
    outputFile.open("output.txt");

    // With this line of code, we make system read from file.
    inputFile >> operand1 >> op >> operand2;

    // In this step, we are typing the arithmetic operations.
    if(op=='+'){
        result = operand1 + operand2;
    }else if(op=='-'){
        result = operand1 - operand2;
    }else if(op=='*'){
        result = operand1 * operand2;
    }else if(op=='/'){
        if(operand2 == 0){
            isValid = false;
            outputFile << "Error: Division by zero!"; // We don't want denominator to be 0. This is why, we are adding a step which gives
        }else {                                       // us an error when the denominator is 0.
            result = operand1 / operand2;
        }
    }else{
        isValid = false;
        cout << "This operation can't be done.";      // If user gives us any other thing than an operation, user will see this message as an error.
    }

    if(isValid == true){
        outputFile << operand1 << " " << op << " " << operand2 << " " << "=" << " " << result << endl;
    }

    // In this step, we are opening the file, we make system to read file and we are typing arithmetic operations again to get second operation.
    // (I tried a lot of things to not hard code like this but I couldn't find. If there is an easier way, please let me know Dr.Ghosh.)
    inputFile >> operand1 >> op >> operand2;

    if(op=='+'){
        result = operand1 + operand2;
    }else if(op=='-'){
        result = operand1 - operand2;
    }else if(op=='*'){
        result = operand1 * operand2;
    }else if(op=='/'){
        if(operand2 == 0){
            isValid = false;
            outputFile << "Error: Division by zero!";
        }else {
            result = operand1 / operand2;
        }
    }else{
        isValid = false;
        cout << "This operation can't be done.";
    }

    if(isValid == true){
        outputFile << operand1 << " " << op << " " << operand2 << " " << "=" << " " << result << endl;
    }

    // In this step, we are opening the file, we make system to read file and we are typing arithmetic operations again to get second operation.
    inputFile >> operand1 >> op >> operand2;

    if(op=='+'){
        result = operand1 + operand2;
    }else if(op=='-'){
        result = operand1 - operand2;
    }else if(op=='*'){
        result = operand1 * operand2;
    }else if(op=='/'){
        if(operand2 == 0){
            isValid = false;
            outputFile << "Error: Division by zero!";
        }else {
            result = operand1 / operand2;
        }
    }else{
        isValid = false;
        cout << "This operation can't be done.";
    }

    if(isValid == true){
        outputFile << operand1 << " " << op << " " << operand2 << " " << "=" << " " << result << endl;
    }


    //In the last step, we are closing the files.
    inputFile.close();
    outputFile.close();


    return 0;
}