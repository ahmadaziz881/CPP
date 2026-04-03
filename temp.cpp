#include<iostream>
using namespace std;

int main(){
        int choice;
        float c , f;
        cout<<"1: Celius to Farhenheit \n2: Farhenheit to Celius" <<endl;
        cin >> choice ;      
        if (choice == 1)
        {
            cout<<"Enter Celsius"<<endl;
            cin >> c ;
            f = (c * 9/5) + 32 ; 
            cout << "Farhenhiet = " << f << endl;
        }else{
            cout<< "Enter Farheniet" << endl;
            cin >> f ;
            c = ( f - 32 ) * 5/9 ;
            cout << "Celsius = " << c << endl;
        }
        
return 0;
}