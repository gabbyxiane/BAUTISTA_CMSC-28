#include <iostream>
#include "Person.h" // Include the header file Person.h
#include "Grade.h" // Include the header file Grades.h

using namespace std;

int main(){
    int a;
    char g;
    float grade;
    string course;
    
    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;


    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);
        
    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);


    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;
    cout << "\nThis is an example of method overloading: \n";
    cout << "Using view 1: \n";
    p.view();

    cout << "\n========================== USING NEW HEADER FILE ==========================" << endl;
    
    float finalGrade;
    string courseName;

   // Create a Grades object
    cout << "Input final grade: ";
    cin >> finalGrade;
    cout << "Input course name: ";
    cin.ignore();

    getline(cin, courseName);

    Grades g1(finalGrade, courseName);

    cout << "Course Name: " << g1.getcourseName() << endl;
    cout << "Final Grade: " << g1.getfinalGrade() << endl;
    cout << g1.gradeRemarks() << endl;
    
    return 0;
} 