#include<iostream>
using namespace std;

    struct student
    {
         int id;
         char   character;
         float cgpa;
    };
    

int main(){

    struct student Ahmad;
    Ahmad.id=372974929;
    Ahmad.character='S';
    Ahmad.cgpa=3.2;
        
            cout<<Ahmad.id<<endl;
            cout<<Ahmad.character<<endl;
            cout<<Ahmad.cgpa<<endl;    

        return 0;
}