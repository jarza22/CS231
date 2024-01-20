#include <iostream>
using namespace std;

int main(){
float radius, diameter, circumference, surfaceArea, volume, pi, height;
// In this line, I implied to the system that these values will be float values.

cout << "Please enter radius: \n";
cin >> radius;
cout << "Please enter height: \n";
cin >> height;
// In these lines, I wanted the informations for cylinder from user.

pi = 3.14159;
diameter = radius * 2;
circumference = 2 * pi * radius;
surfaceArea = (2*pi*radius*height) + (2*pi*radius*radius);
volume = pi*radius*radius*height;
// In these lines, I wrote the formulas for results. Also, I added the pi because it is an unchangeable value.

cout <<"Diameter = " << diameter << endl;
cout <<"Circumference = " << circumference << endl;
cout <<"Surface area = " << surfaceArea << endl;
cout <<"Volume = " << volume << endl;
// In these lines, I wanted to print the results with explaining which value belongs to which.
}