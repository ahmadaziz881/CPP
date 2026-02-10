#include<iostream>
using namespace std;

int main(){

    double num1 , num2 ;
    char op;

    cout<<"Enter the num1"<<endl;
    cin>>num1;

    cout<<"Enter the num2"<<endl;
    cin>>num2;

    cout<<"Enter operator(+ , - , * , /)"<<endl;
    cin>>op;

    if (op == '+')
    {
        cout<<"Result = "<<num1 + num2 <<endl;
    }
    else if (op == '-')
    {
        cout<<"result = "<< num1 - num2 <<endl;
    }
    else if (op== '*')
    {
        cout<<"Result = "<<num1 * num2<<endl;
    }
    else if (op == '/')
    {
        cout<<"Result = "<<num1/num2<<endl;
        if (num2==0)
        {
            cout<<"Error:Division by zero is not allowed"<<endl;
        }
        else
        {
            cout <<num1/num2<<endl;
        }                
    }
    else
    {
        cout<<"Error:Invalid operator"<<endl;
    }
    return 0;
}