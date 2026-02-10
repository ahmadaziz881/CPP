#include<iostream>
using namespace std;

int main(){

/* Loops practice in C++*/

        int i;
        for ( i = 1; i <=10; i++)
        {         
               cout<<i<<endl;
        }

/*while loop for cpp to print multiplication table of any digits*/
    int num;
    int i=1;
    
        cout<<"Enter the num"<<endl;
        cin>>num;
    
    while (i <= 10)
    {
        cout<< num << "x" << i << "=" << num*i <<endl;
        i++;
    }

/*print sum first ten natural number using loops*/

int sum=0;
for (int i = 1; i <=10; i++)
{
    sum= sum + i;
}
    cout<<"sum of first ten natural number = "<<sum<<endl;

return 0;
}