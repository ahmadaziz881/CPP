#include<iostream>
using namespace std;

int main(){
        int num; 
        cout<<"Enter number"<<endl;
        cin >> num ;
        if (num > 0 )
        {
            cout<<"Number is positive"<<endl;
        }else if (num < 0)
        {
            cout<<"Number is negetive"<<endl;
        }else{
            cout<<"Number is  zero"<<endl;
        }
        
return 0;
}