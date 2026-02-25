#include<iostream>
using namespace std;

void showMenu(){
    cout<<"<-----Menu----->"<<endl;
    cout<<"1. Biryani  - 250"<<endl;
    cout<<"2. Pizza    - 800"<<endl;
    cout<<"3. Burger   - 300"<<endl;
    cout<<"4. Exit "<<endl;
}
int main(){
    int choice , quantity;
    int total = 0;
    do
   
    {
        showMenu();
        cout<<"Enter choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter Quantity"<<endl;
            cin>>quantity;
            total += 250 * quantity;
            break;

        case 2:
            cout<<"Enter Quantity"<<endl;
            cin>>quantity;
            total += 800 * quantity;
            break;
        
        case 3:
            cout<<"Enter Quantity"<<endl;
            cin>>quantity;
            total += 300 * quantity;
            break;

        case 4:
            cout<<"<---receipt--->"<<endl;
            cout<<"Total Bill : "<< total << endl;
            cout<<"Thank You"<<endl;
            break;
        
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }

    } while (choice != 4);
    
}