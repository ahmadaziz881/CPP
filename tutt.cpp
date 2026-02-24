#include<iostream>
using namespace std;

int main(){
    int i;
    
    for (int i = 1; i <= 100; i++)
    {
        cout<< i << endl;
    }
 
    int n;
    int sum=0;
     
    cout<<"Enter a positive number : "<<endl;
    cin>>n;
        
    for (int i=1 ; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<"sum of first  "<< n <<"  natural number is : "<< sum <<endl;

    int n;
    long long factorial = 1;
    cout<<"Enter a positive number : "<<endl;
    cin>> n;
    if (n < 0)
    {
        cout<<"Factorial is not defined for negative numbers "<<endl;
      
    }else{
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout<<"Factorial of " <<   n  << " is : " << factorial <<endl;
        
    }
    int num ;
    cout<<"Enter number : "<<endl;
    cin>>num;
      
    cout<< "Multiplication table is "<<num<<":"<<endl;
     
    for (int i = 1; i <= 20; i++)
    {
        cout<< num <<" x "<< i <<" = "<<num  * i<<endl;
    }

    int num , count = 0;
    cout<<"Enter number : "<<endl;
    cin>>num;
    if (num == 0)
    {
       count = 1;
    }else{
        if (num < 0)
        {
            num = -num;
        }
        while (num  > 0)
        {
            num = num/10;
            count++;
        }
        
    }
    cout<<" Total digits : "<< count <<endl;
   
    int num , reverse = 0;
    cout<<"Enter number : ";
    cin>>num;

    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }
    cout<<"Reverse number : "<<reverse;
      
    int rows;
    cout<<"enter number of rows : "<<endl;
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}