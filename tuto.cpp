#include<iostream>
using namespace std;

int main(){

// simple calculation using iostream and operators

    int a , b;
    char op;
     
    cout<<"Enter first number "<<endl;
    cin>>a;
     
    cout<<"Enter operator"<<endl;
    cin>>op;
      
    cout<<"Enter second number "<<endl;
    cin>>b;
      
    cout<<"Adition"<< a + b <<endl;
     
    cout<<"subtract"<< a - b <<endl;
      
    cout<<"multiply"<< a * b <<endl;
     
    if (b != 0)
    {
        cout<<"Division"<< a/b <<endl;
    }else{
        cout<<"Divide by zero is not allowed"<<endl;
    }

//EVEN or  ODD
    int a ;
    cout<<"Enter number "<<endl;
    cin>>a;
    
    if (a % 2 == 0)
    {
        cout<<"Even number"<<endl;
    }else{
        cout<<"Odd number"<<endl;
    }

// Largest number
    int a ,b ,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;
    
    if (a >= b && b >= c)
    {
        cout<< a << " is largest number"<<endl;
    }else if (b >= a && b >= c)
    {
        cout<< b << " is largest number"<<endl;
    }else{
        cout<< c << " is largest number"<<endl;
    }
    
//Grade Calculator
    int marks;
    cout<<"Enter marks"<<endl;
    cin>>marks;
        
    if (marks >= 90)
    {
        cout<<" A "<<endl;
    }else if (marks >= 80)
    {
        cout<<" B "<<endl;
    }else if ( marks >= 60)
    {
        cout<<" C "<<endl;
    }else{
        cout<<"Fail"<<endl;
    }

// Simple Interest
    float P , R  , T , SI ;
    cout<<"Enter principal"<<endl;
    cin>>P;
    cout<<"Enter rate"<<endl;
    cin>>R;
    cout<<"Enter time"<<endl;
    cin>>T;
    SI = P * R * T ;
    cout<<"Simple Interest = "<< SI <<endl;
    
    return 0;
}