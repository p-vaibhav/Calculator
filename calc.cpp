#include <iostream>

using namespace std;

int main()
{
int option;
double num1, num2;
double result;

cout << "Calculator" << endl <<endl << endl;
cout << "1. Addition" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
cout << "4. Division" << endl;
cout << "5. Square" << endl;
cout << endl << "Enter an option" << endl;
cin >> option;

switch (option)
{
case 1:
    {
        cout << "Enter 1st number" << endl;
        cin >> num1;
        cout << "Enter 2nd number" << endl;
        cin>> num2;
        result = num1 + num2;
        cout << "Result = " << result;
    break;
    }
case 2:
    {
        cout << "Enter 1st number" << endl;
        cin >> num1;
        cout << "Enter 2nd number" << endl;
        cin>> num2;
        result = num1 - num2;
        cout << "Result = " << result;
    break;
    }
case 3:
    {
        cout << "Enter 1st number" << endl;
        cin >> num1;
        cout << "Enter 2nd number" << endl;
        cin>> num2;
        result = num1 * num2;
        cout << "Result = " << result;
    break;
    }
case 4:
    {cout << "Enter 1st number" << endl;
        cin >> num1;
        cout << "Enter 2nd number" << endl;
        cin>> num2;
        result = num1 / num2;
        cout << "Result = " << result;
    break;
    }
case 5:
    {cout << "Enter a number" << endl;
        cin >> num1;
        result = num1 * num1;
        cout << "Result = " << result;
    break;
    }

default:
    {
        cout << "Error!!! You entered a wrong option." <<endl;
        cout << "Please retry." << endl;
    }
    break;
}
}

