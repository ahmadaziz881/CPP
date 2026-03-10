#include <iostream>
using namespace std;

int main()
{
    int number[5];
    int sum = 0;
    float average;
    cout << "Enter 5 numbers\n"
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + number[i];
    }
    average = sum / 5;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}