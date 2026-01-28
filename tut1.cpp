    //   VARIABLE and  DATA_TYPES with SIZE IN C++

#include<iostream>
using namespace std;

int main(){
         
           int a=50;
           int b=55;
           char classgrade='A';
           float PI = 3.14f; 
           bool goodmanner =true;
           bool badmanner  =false;
           double price= 1244.34;

           // it is integer data-type in variable "a" and "b" in c++
           cout<<"integer data-type"<<endl;
           cout<<a<<endl<<b<<endl; 
           cout<<"integer size"<<endl;
           cout<<sizeof(a)<<endl<<sizeof(b)<<endl;

           // it is character data-type in variable "classgrade" in c++
           cout<<"character data-type"<<endl; 
           cout<<classgrade<<endl;
           cout<<"character size"<<endl;
           cout<<sizeof(classgrade)<<endl;

           //it is float data-type in variable "PI" in c++
           cout<<"float data-type"<<endl;
           cout<<PI<<endl;
           cout<<"float size"<<endl;
           cout<<sizeof(PI)<<endl;

           // it is boolean data-type in variable "goodmanner" and "badmanner" in c++
           cout<<"boolean data-type"<<endl;
           cout<<goodmanner<<endl<<badmanner<<endl;
           cout<<"bool size"<<endl;
           cout<<sizeof(goodmanner)<<endl<<sizeof(badmanner)<<endl;

           // it is double data-type in variable price in c++
           cout<<"double data-type"<<endl;
           cout<<price<<endl;
           cout<<"double size"<<endl;
           cout<<sizeof(price)<<endl;


    return 0;
}