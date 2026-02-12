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


    // unions in C++
     union money ;
     int rice;
     char car;
     float pounds;
      rice=75;
      cout<<rice<<endl;

    // //Enums in C++ 
     enum meal {breakfast , lunch , dinner};
     cout<<breakfast<<endl;
     cout<<lunch<<endl;

        return 0;
}