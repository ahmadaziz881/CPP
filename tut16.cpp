#include<iostream>
using namespace std;

// Function with prototype in C++

int sum(int a, int b);

int main(){

    int num1, num2;

    cout<<"enter the number"<<endl;
    cin>>num1;

    cout<<"Enter the number"<<endl;
    cin>>num2;
    

    cout<<"Sum = "<<sum(num1 , num2)<<endl;

    return 0;

}
int sum(int a, int b){
    int c = a + b;
    return c ;
}
