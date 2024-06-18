// Prevent multiple inclusions of the header file
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

// Person class definition
class Person {

    // Private member variables
    private:
        string fname;   // First name of the person
        string lname;   // Last name of the person
        string gender;  // Gender of the person

    // Public member functions
    public:
        // Constructor to initialize all member variables
        Person(string fname, string lname, string gender) : fname(fname), lname(lname), gender(gender) {}

        // Getters
        // Function to get the first name
        string getfname() {
            return fname;
        }

        // Function to get the last name
        string getlname() {
            return lname;
        }

        // Function to get the gender
        string getgender() {
            return gender;
        }

        // Setters
        // Function to set a new first name
        void setfname(string newfname) {
            fname = newfname;
        }

        // Function to set a new last name
        void setlname(string newlname) {
            lname = newlname;
        }

        // Function to set a new gender
        void setgender(string newgender) {
            gender = newgender;
        }

        // Method to get the full name (first name + last name)
        string getName() {
            return fname + " " + lname;
        }
};

#endif // PERSON_H
