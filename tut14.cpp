#include<iostream>
using namespace std;
struct Student
{
   int id;
   char name;
   float cgpa; 
};

int main(){
        struct Student Ahmad;
        Ahmad.id=524834932;
        Ahmad.name='S';
        Ahmad.cgpa=3.33;
        cout<< Ahmad.id <<endl;
        cout<< Ahmad.name <<endl;
        cout<< Ahmad.cgpa <<endl;
    return 0;
}