#include<iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
 int main(){
    int  num1 , num2 ;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"Sum = "<<add(num1 , num2)<<endl;
    cout<<"Subtractuction = "<<subtract(num1 , num2)<<endl;

    return 0;
 }

 // Function for addition 
int add(int a, int b){
        return a + b;
}
// Function for subtraction
int subtract(int a, int b){
    return a - b;
}


 