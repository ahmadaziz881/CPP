#include <iostream>
#include <string>
using namespace std;

#define MAX 100


int rollNo[MAX];
string name[MAX];
float marks[MAX];
char grade[MAX];
int studentCount = 0;

//  calculate grade
char calculateGrade(float m) {
    if (m >= 90)
        return 'A';
    else if (m >= 75)
        return 'B';
    else if (m >= 60)
        return 'C';
    else if (m >= 50)
        return 'D';
    else
        return 'F';
}

//  add student
void addStudent() {
    if (studentCount >= MAX) {
        cout << "Student limit reached!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> rollNo[studentCount];

    cin.ignore();  

    cout << "Enter Name: ";
    getline(cin, name[studentCount]);

    cout << "Enter Marks: ";
    cin >> marks[studentCount];

    grade[studentCount] = calculateGrade(marks[studentCount]);

    studentCount++;

    cout << "Student Added Successfully!\n";
}

//  show all students
void showStudents() {
    if (studentCount == 0) {
        cout << "No students available.";
        return;
    }

    cout << "<--- Student List --->";
    for (int i = 0; i < studentCount; i++) {
        cout << "\nRoll No: " << rollNo[i];
        cout << "\nName: " << name[i];
        cout << "\nMarks: " << marks[i];
        cout << "\nGrade: " << grade[i] << endl;
    }
}

// search student
void searchStudent() {
    int searchRoll;
    bool found = false;

    cout << "Enter Roll Number to Search: ";
    cin >> searchRoll;

    for (int i = 0; i < studentCount; i++) {
        if (rollNo[i] == searchRoll) {
            cout << "\nStudent Found!";
            cout << "Roll No: " << rollNo[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            cout << "Grade: " << grade[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student Not Found!";
    }
}


int main() {
    int choice;

    do {
        cout << "<-------student managment---------->"<<endl;
        cout << "1. Add Student"<<endl;
        cout << "2. Show All Students"<<endl;
        cout << "3. Search Student"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent();
                break;
            case 2:
                showStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}