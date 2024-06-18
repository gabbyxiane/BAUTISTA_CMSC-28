#include <iostream>
#include <string>

using namespace std;

class Student{

    private:
        string fname;
        string lname;
        int studentNumber;

    public:
        // Constructor
        Student(string fname, string lname, int studentNumber) : fname(fname), lname(lname), studentNumber(studentNumber) {}

        // Member function to display the details of a student
        void displayDetails(){
            cout << "Name: " << fname << " " << lname << endl;
            cout << "Student Number: " << studentNumber << endl;
        }
};