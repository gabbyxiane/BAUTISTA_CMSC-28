#ifndef PERSON_H
#define PERSON_H

#include <iostream> 
#include <string> 

using namespace std; // Use the standard namespace for convenience

// Person class definition
class Person {
private:
    string fname; // Private member variable for first name
    string lname; // Private member variable for last name
    string gender; // Private member variable for gender
    string emailAdd; // Private member variable for email address
    string cpNumber; // Private member variable for contact number

public:
    // Constructor to initialize a Person object with the provided details
    Person(string fname, string lname, string gender, string emailAdd, string cpNumber)
        : fname(fname), lname(lname), gender(gender), emailAdd(emailAdd), cpNumber(cpNumber) {}

    // Getter methods to access private member variables
    string getfname() const { return fname; } // Getter for first name
    string getlname() const { return lname; } // Getter for last name
    string getgender() const { return gender; } // Getter for gender
    string getEmailAdd() const { return emailAdd; } // Getter for email address
    string getCpNumber() const { return cpNumber; } // Getter for contact number

    // Setter methods to modify private member variables
    void setfname(string newfname) { fname = newfname; } // Setter for first name
    void setlname(string newlname) { lname = newlname; } // Setter for last name
    void setgender(string newgender) { gender = newgender; } // Setter for gender
    void setEmailAdd(string newEmailAdd) { emailAdd = newEmailAdd; } // Setter for email address
    void setCpNumber(string newCpNumber) { cpNumber = newCpNumber; } // Setter for contact number

    // Method to get the full name of the person
    string getName() const { return fname + " " + lname; }
};

#endif 
