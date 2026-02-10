#include<iostream>
using namespace std;

int main(){
// pointers in C++
    int a=5;

    int * b = &a;

// & --> address operator
    cout<<"the address of a is  "<< &a <<endl;               
    cout<<"the address of b is  "<< &a <<endl;                  

//dereferance operator                                 
    cout<<"the value at address b is  "<< *b << endl;
    return 0;
}