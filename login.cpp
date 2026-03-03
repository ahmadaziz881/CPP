#include<iostream>
#include<string>
using namespace std;
string storedusername = "";
string storedpassword = "";

// function for registeration 
void registeruser(){
    cout<<"----Register----"<<endl;

    cout<<"Enter username"<<endl;
    cin>>storedusername;

    cout<<"Enter password"<<endl;
    cin>>storedpassword;

    cout<<"Registration Successfull: welcome!"<<endl;
    
}
// function for login user

void loginuser(){
    string username , password;

    cout<<"Enter username"<<endl;
    cin>>username;
    cout<<"Enter password"<<endl;
    cin>>password;

    if (username == storedusername && password == storedpassword)
    {
        cout<<"Login Successfull"<<endl;
    }else{
        cout<<"Invalid username or password"<<endl;
    }   
}

int main(){
    int choice;

    do
    {
        cout<<"University of Peshawar"<<endl;
        cout<<"1. Register "<<endl;
        cout<<"2. Login "<<endl;
        cout<<"3. Exit "<<endl;
        cout<<"Enter choice "<<endl;
        cin>>choice;

        switch (choice)
    {
    case 1:
        registeruser();
        break;
    case 2:    
        loginuser();
        break;
    case 3:    
        cout<<"exit program"<<endl;
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    } while (choice != 3);
    
    return 0;
}