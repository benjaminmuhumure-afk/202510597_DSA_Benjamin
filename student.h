#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

#include <string>
using namespace std;
// Structure to store Student information
structStudent {    
int id;   
string name;    
int age;    
string course;
};
 // fonction declarationvoid 
 addStudent();
 void displayStudents();
 void searchStudent();
 void updateStudent();
 void deleteStudent();
 
 #endif