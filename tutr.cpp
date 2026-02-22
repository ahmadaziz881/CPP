#include<iostream>
using namespace std;

int main(){
    // check positive and negative number 

    int a , b;
            cout<<"enter the first number ";
            cin>>a;
             
            cout<<"enter the second number ";
            cin>>b;
                
            if (a % b ==0)
            {
                cout<<"Even";
            }else{
                cout<<"Odd";
            }
            int number;
             
            cout<<"enter number"<<endl;
            cin>>number;
              
            if (number > 0)
            {
                cout<<"number is positive "<<endl;
            }else if (number < 0)
            {
                cout<<"number is negetive "<<endl;
            }else{
                cout<<"number is zero " <<endl;
             
            }

        //check grade of student according marks
    int marks;
            cout<<"enter the marks"<<endl;
            cin>>marks;
            if (marks > 90 )
            {
                cout<<"A"<<endl;
            }else if (marks > 80 )
            {
                cout<<"B"<<endl;
            }else if (marks > 70 )
            {
                cout<<"C"<<endl;
            }else{
                cout<<"Fail"<<endl;
              
            }

        //make simple calculator    
        double a , b  ;
        char op;
                cout<<"Enter  first number: "<<endl;
                cin>>a;
                     
                cout<<"Enter the operator(+ , - , * , /):"<<endl;
                cin>>op;
                    
                cout<<"Enter  second number: "<<endl;
                cin>>b;
            
                if (op == '+')
                {
                    cout<<"Result: "<< a + b <<endl;
                }
                else if (op == '-')
                {
                    cout<<"Result: "<< a - b <<endl;
                }
                else if (op == '*')
                {
                    cout<<"Result: "<< a * b <<endl;
                }
                else if (op == '/')
                {
                    if (b == 0)
                    {
                        cout<<"Error:divide by zero is not allowed "<<endl;
                    }else{
                        cout<<"Result: "<< a / b <<endl;
                    }
                  
                }else{
                    cout<<"Error: Invalid operator";
                }
                      
    return 0;
}