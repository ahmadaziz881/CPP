#include<iostream>
using namespace std;

int main(){
    int i;
        // loops in cpp ----->> perform repititive tasks like printing ,calculation 
        // for loops ------->>> when we know about loops 

        //Syntax for    For loop
//  for (initiolization , condition , updation)
//int i;
for ( i = 1; i <= 5; i++)
{
    cout<<i<<endl;
}

/*while loop in c++ */ 

//int i=1;
while (i<=100)
{
    cout<< i << endl;
    i++;
}

// do while loop in c++

do
{
    cout<< i <<endl;
    i++;
} while (false);


return 0;
    
}