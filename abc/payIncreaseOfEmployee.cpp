# include <iostream>
# include <iomanip>

using namespace std;

int main (){
    // Firstly, I introduced the variables.
    string lastName, firstName;
    double currentSalary, updatedSalary;
    int percentageOfPayIncrease;

    // Then, in these lines, I wanted the informations from the user.
    cout << "Please enter the last name, first name, current salary and percentage of pay increase by order: \n";
    cin >> lastName >> firstName >> currentSalary >> percentageOfPayIncrease;
    
    // In this line, I wrote the formula for updated salary.
    updatedSalary = (currentSalary * (100 + percentageOfPayIncrease)) / 100;

    // In this line, I wrote the output codes based on the instructions.
    cout << setw(12) << right << firstName << setw(12) << right << lastName << fixed << setprecision(2) << setw(12) << right << updatedSalary;

}