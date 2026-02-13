#include<iostream>
using namespace std;
// call by value
void swapvar(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}
// call by reference
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int x =11, y=12 ;
    cout<<"the value of x is "<< x <<endl<<"the value of y is "<< y <<endl;
    swapPointer(&x , &y);
    cout<<"the value of x is "<< x <<endl<<"the value of y is "<< y <<endl;
    return 0;
}