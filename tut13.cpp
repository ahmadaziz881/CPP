#include<iostream>
using namespace std;

int main(){

// Arrays in C++  ---->>  collection of items of same types
       
    cout<<"marks"<<endl;
    int marks[4] = {12,23,45,76};
        cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
        cout<<marks[4]<<endl;
          
    cout<<"Mathmarks"<<endl;
    int mathmarks[3] = {233,345,54432,};
        cout<<mathmarks[0]<<endl;
        cout<<mathmarks[1]<<endl;
        cout<<mathmarks[2]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the value marks "<< i <<"  is   "<< marks[i] <<endl;
    }
    
    int *p = marks;

        cout<<*(p++)<<endl;
        cout<<*(p)<<endl;
        cout<<"the value of *p "<<*p<<endl;
        cout<<"the value of *(p+1) "<<*(p+1)<<endl;
        cout<<"the value of *(p+2) "<<*(p+2)<<endl;
        cout<<"the value of *(p+3) "<<*(p+3)<<endl;
        

        return 0;
}