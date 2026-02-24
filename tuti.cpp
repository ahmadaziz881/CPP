#include <iostream>
using namespace std;

const int MAX = 100;

int rollNumbers[MAX];
string names[MAX];
float marks[MAX];
int studentCount = 0;

// Function to add student
void addStudent() {
    if (studentCount >= MAX) {
        cout << "Student limit reached!\n";
        return;
    }

    cout << "Enter Roll Number: ";
    cin >> rollNumbers[studentCount];

    cout << "Enter Name: ";
    cin >> names[studentCount];

    cout << "Enter Marks: ";
    cin >> marks[studentCount];

    studentCount++;

    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents() {
    if (studentCount == 0) {
        cout << "No students found!\n";
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        cout << "\nRoll No: " << rollNumbers[i];
        cout << "\nName: " << names[i];
        cout << "\nMarks: " << marks[i];

        if (marks[i] >= 50)
            cout << "\nStatus: Pass\n";
        else
            cout << "\nStatus: Fail\n";
    }
}

// Function to search student
void searchStudent() {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for (int i = 0; i < studentCount; i++) {
        if (rollNumbers[i] == roll) {
            cout << "Student Found!\n";
            cout << "Name: " << names[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}