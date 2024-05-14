/*
Deomonstrates math with variables
*/
//Demonstration with variables and inputs

#include <iostream> 
#include <cmath>
#include <iomanip> // Manipulating the stream

using namespace std;

int main() {

    int year; // Declaration
    year = 2024; //Initialization/assigning the variable

   // int year = 2024;  Another way of initializing the variable
    // double a = 1.0;
    // double b = -5.0;
    // double c = 6.0;

    //Quadratic formula

    cout << " What is A? ";
    double a;
    cin >> a;

    cout<< " What is B? ";
    double b;
    cin >> b;

    cout << " What is C? ";
    double c;
    cin >> c;

    double answer_1 = (-b / (2 * a)) + ( (sqrt(pow(b, 2)- (4 * a * c))) / (2 * a) ); 
    double answer_2 = (-b / (2 * a)) - ( (sqrt(pow(b, 2)- (4 * a * c))) / (2 * a) );

    cout << answer_1 << endl;
    cout << answer_2 << endl;

    cout << fixed << setprecision(2); //Modifies all the outputs to have two decimal places

    cout << "the year is: " << year << endl;
    cout << "a is: " << a << endl;
    
    //Basic math operarations

    cout << a << " + " << b << " = " << a + b << endl;  
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    
    //Modulus :Basically the remainder

    cout << "5 % 2 = " << 5 % 2 << endl; 
    cout << "1 % 10 = " << 1 % 10 << endl;
    cout << "123 % 10 ="  << 123 % 10 << endl;
    cout << "783219 % 10 ="  << 783219 % 10 << endl;
    
    //More advanced calculations 

    cout << "Square root of 9 is: " << sqrt(9) << endl;
    cout << "2 cube is: " << pow(2, 3) << endl;

    return 0;
}