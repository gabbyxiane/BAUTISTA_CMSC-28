#include "Student.h" // Include the Student class header 
#include "Person.h" // Include the Person class header (Student inherits from Person which is the parent class)
#include <string> 
#include <iostream> 
#include <list> 

using namespace std; // Use the standard namespace for convenience

// Function to get user input for a Student object
Student getStudentInput(string prompt) {
    // Declare variables for student details
    string fname, lname, gender, emailAdd, cpNumber, studentNum, Course, Department, College;

    // Prompt the user to enter student details
    cout << "Enter details for " << prompt << ":\n";
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter gender: ";
    getline(cin, gender);
    cout << "Enter email address: ";
    getline(cin, emailAdd);
    cout << "Enter contact number: ";
    getline(cin, cpNumber);
    cout << "Enter student number: ";
    getline(cin, studentNum);
    cout << "Enter course: ";
    getline(cin, Course);
    cout << "Enter department: ";
    getline(cin, Department);
    cout << "Enter college: ";
    getline(cin, College);

    // Create and return a Student object initialized with the input values
    return Student(fname, lname, gender, emailAdd, cpNumber, studentNum, Course, Department, College);
}

// Function to get user input for a string
string getStringInput(string prompt) {
    cout << "Enter " << prompt << ": "; // Prompt the user
    string input;
    getline(cin, input); // Read the input string
    return input; // Return the input string
}

// Function to get user input for an integer
int getIntInput(string prompt) {
    cout << "Enter number of " << prompt << ": "; // Prompt the user
    int input;
    cin >> input; // Read the input integer
    cin.ignore(); // Clear the newline character left in the input buffer
    return input; // Return the input integer
}

// Function to display the program description
void progdescription() {
    // Print the program description and developer information
    cout <<"========================================================================================\n";
    cout << "                          HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << " This program asks the user to input the details of a student and display the information\n";
    cout << "                       Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                                  Date: May 29, 2024\n";
    cout << "                       Subject Number: CMSC 28 - OOP 4 INHERITANCE\n";
    cout <<"========================================================================================\n";
}

int main() {
    progdescription(); // Display the program description

    // Get the number of students from the user
    int numStudents = getIntInput("Students");
    list<Student> students; // Create a list to store Student objects

    // Loop to get input for each student
    for (int i = 0; i < numStudents; i++) {
        students.push_back(getStudentInput("Student " + to_string(i + 1))); // Add a new Student object to the list
    }

    // Loop to display details of each student
    for (const Student& student : students) {
        // Display student details
        cout << "\n\n STUDENT: " << student.getfname() << " " << student.getlname() << "\n";
        cout << "Gender: " << student.getgender() << "\n";
        cout << "Email Address: " << student.getEmailAdd() << "\n";
        cout << "Contact Number: " << student.getCpNumber() << "\n";
        cout << "Student Number: " << student.getStudentNum() << "\n";
        cout << "Course: " << student.getCourse() << "\n";
        cout << "Department: " << student.getDepartment() << "\n";
        cout << "College: " << student.getCollege() << "\n";

        // Personalized welcome message for the student
        cout << "\nHi, " << student.getfname() << " " << student.getlname() << "! Welcome to UP Mindanao and congratulations! ";
        cout << "We are pleased to inform you that you are admitted in the \"" << student.getCourse() << "\" under the \"";
        cout << student.getDepartment() << "\", \"" << student.getCollege() << "\". Your Student number is \"" << student.getStudentNum() << "\".\n";
    }

    return 0; // Exit the program
}
