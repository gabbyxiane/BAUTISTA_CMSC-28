#ifndef EMPLOYEES_H 
#define EMPLOYEES_H

#include "Person.h" // Include the Person class, which Employees will inherit from

// The Employees class inherits from the Person class
class Employees : public Person {
private:
    string empNum; // Private member variable to store the employee number

public:
    // Public member variables - consider making these private for better encapsulation
    string Position; // Employee's position in the company
    string Office;   // Office location of the employee
    double Salary;   // Employee's salary

    // Constructor to initialize all member variables, including those inherited from Person
    Employees(string fname, string lname, string gender, string emailAdd, string cpNumber, string empNum, string Position, string Office, double Salary) 
        : Person(fname, lname, gender, emailAdd, cpNumber), // Call the base class (Person) constructor
          empNum(empNum), // Initialize empNum
          Position(Position), // Initialize Position
          Office(Office), // Initialize Office
          Salary(Salary) {} // Initialize Salary

    // Getter method for empNum
    string getempNum() const { return empNum; }

    // Setter method for empNum
    void setempNum(string newempNum) { empNum = newempNum; }
};

#endif 