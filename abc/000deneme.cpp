#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // In this step, we are declaring variables.
    bool isValid = true;
    int operand1, operand2;
    float result;
    char op;
    ifstream inputFile; // input file stream variable
    ofstream outputFile; // output file stream variable

    // open files
    inputFile.open("000a.txt");
    outputFile.open("000b.txt");

    // Read first line from input file
    inputFile >> operand1 >> op >> operand2;

    /*
    // Perform the arithmetic operation
    if (op == '+') {
        result = operand1 + operand2;
    } else if (op == '-') {
        result = operand1 - operand2;
    } else if (op == '*') {
        result = operand1 * operand2;
    } else if (op == '/') {
        if (operand2 == 0) {
            isValid = false;
            outputFile << "Error: Division by zero" << endl;
        } else {
            result = static_cast<float>(operand1) / operand2;
        }
    } else {
        isValid = false;
        outputFile << "Error: Invalid operator" << endl;
    }

    // Write the expression and result to the output file
    if (isValid) {
        outputFile << operand1 << " " << op << " " << operand2 << " = " << result << endl;
    }

    // Read second line from input file
    inputFile >> operand1 >> op >> operand2;
    */

    // Perform the arithmetic operation
    if (op == '+') {
        result = operand1 + operand2;
    } else if (op == '-') {
        result = operand1 - operand2;
    } else if (op == '*') {
        result = operand1 * operand2;
    } else if (op == '/') {
        if (operand2 == 0) {
            isValid = false;
            outputFile << "Error: Division by zero" << endl;
        } else {
            result = static_cast<float>(operand1) / operand2;
        }
    } else {
        isValid = false;
        outputFile << "Error: Invalid operator" << endl;
    }

    // Write the expression and result to the output file
    if (isValid) {
        outputFile << operand1 << " " << op << " " << operand2 << " = " << result << endl;
    }

    // Read third line from input file
    inputFile >> operand1 >> op >> operand2;

/*
    // Perform the arithmetic operation
    if (op == '+') {
        result = operand1 + operand2;
    } else if (op == '-') {
        result = operand1 - operand2;
    } else if (op == '*') {
        result = operand1 * operand2;
    } else if (op == '/') {
        if (operand2 == 0) {
            isValid = false;
            outputFile << "Error: Division by zero" << endl;
        } else {
            result = static_cast<float>(operand1) / operand2;
        }
    } else {
        isValid = false;
        outputFile << "Error: Invalid operator" << endl;
    }

    // Write the expression and result to the output file
    if (isValid) {
        outputFile << operand1 << " " << op << " " << operand2 << " = " << result << endl;
    }
    */

    // Close files
    inputFile.close();
    outputFile.close();

    return 0;
}
