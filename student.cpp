#include "student.h"

Student students[100];
int count = 0;

// add student
void addStudent() {
    cout << "Enter ID: ";
    cin >> students[count].id;

    cout << "Enter Name: ";
    cin >> students[count].name;

    cout << "Enter Age: ";
    cin >> students[count].age;

    cout << "Enter Course: ";
    cin >> students[count].course;

    count++;
    cout << "Student added successfully!\n";
}
// display all student
void displayStudents() {
    for(int i = 0; i < count; i++) {
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
        cout << "-------------------\n";
    }
}

// search student by id
void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            cout << "Student Found:\n";
            cout << students[i].name << endl;
            return;
        }
    }

    cout << "Student not found\n";
}
// function to update student information
void updateStudent() {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            cout << "Enter new name: ";
            cin >> students[i].name;
            cout << "Updated successfully!\n";
            return;
        }
    }

    cout << "Student not found\n";
}
// delete a student
void deleteStudent() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            for(int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            cout << "Deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found\n";
}