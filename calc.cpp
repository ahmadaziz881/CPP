#include<iostream>
using namespace std;

int main(){
        float a , b;
        char op ;

        cout <<"Enter first number"<<endl;
        cin >> a ;

        cout <<"enter operator(+ , - , * , / ) "<<endl;
        cin >> op ;

        cout <<"enter second number"<<endl;
        cin >> b ;
        switch (op)
        {
        case '+':
            cout<< a + b <<endl;
            break;
        
        case '-':
            cout<< a - b <<endl;
            break;
        
        case '*':
            cout<< a * b <<endl;
            break;
        
        case '/':
            cout<< a / b <<endl;
            break;
        
        default:
            cout<<"Invalid option!"<<endl;
            break;
        }
return 0;
}