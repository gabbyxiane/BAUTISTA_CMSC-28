#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h" // Include the base class Person

// Student class derived from Person
class Student : public Person {
private:
    // Private member variable to store the student number
    string studentNum;

public:
    // Public member variables to store course, department, and college
    string Course;
    string Department;
    string College;

    // Constructor to initialize a Student object with the provided details
    Student(string fname, string lname, string gender, string emailAdd, string cpNumber, string studentNum, string Course, string Department, string College)
        : Person(fname, lname, gender, emailAdd, cpNumber), // Initialize the base class (Person) constructor
          studentNum(studentNum), // Initialize the student number
          Course(Course), // Initialize the course
          Department(Department), // Initialize the department
          College(College) // Initialize the college
    {}

    // Getter method for student number
    string getStudentNum() const { return studentNum; }

    // Setter method for student number
    void setStudentNum(string newStudentNum) { studentNum = newStudentNum; }

    // Getter method for course
    string getCourse() const { return Course; }

    // Setter method for course
    void setCourse(string newCourse) { Course = newCourse; }

    // Getter method for department
    string getDepartment() const { return Department; }

    // Setter method for department
    void setDepartment(string newDepartment) { Department = newDepartment; }

    // Getter method for college
    string getCollege() const { return College; }

    // Setter method for college
    void setCollege(string newCollege) { College = newCollege; }
};

#endif
