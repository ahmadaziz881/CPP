#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World! i am ahmad aziz." << endl;

    int a, b;
    char op;
    cout << "Enter first number" << endl;
    cin >> a;

    cout << "Enter operator(+ , - , * , /)" << endl;
    cin >> op;

    cout << "Enter second number" << endl;
    cin >> b;

    cout << "Addition " << (a + b) << endl;
    cout << "Subtraction " << (a - b) << endl;
    cout << "Multiplication " << (a * b) << endl;
    if (b == 0)
    {
        cout << "Divide by zero is not allowed" << endl;
    }
    else
    {
        cout << "Division" << (a / b) << endl;
    }

    int number;
    cout << "Enter number" << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }

    int secretnumber = 8;
    int guess;
    cout << "Enter guess number" << endl;
    cin >> guess;
    if (guess == secretnumber)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Try Again" << endl;
    }

        return 0;
}