#include "Employees.h" // Include the Employees class header
#include "Person.h" // Include the Person class header (Employees inherits from Person which is the parent class)
#include <string> 
#include <iostream> 
#include <list> 

using namespace std; // Use the standard namespace for convenience

// Function to get user input for an Employees object
Employees getEmployeesInput(string prompt) {
    // Declare variables for employee details
    string fname, lname, gender, emailAdd, cpNumber, empNum, Position, Office;
    double Salary;

    // Prompt the user to enter employee details
    cout << "\nEnter details for " << prompt << ":\n";
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
    cout << "Enter employee number: ";
    getline(cin, empNum);
    cout << "Enter position: ";
    getline(cin, Position);
    cout << "Enter office: ";
    getline(cin, Office);
    cout << "Enter salary: ";
    cin >> Salary;
    cin.ignore(); // Clear the newline character left in the input buffer

    // Create and return an Employees object initialized with the input values
    return Employees(fname, lname, gender, emailAdd, cpNumber, empNum, Position, Office, Salary);
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
    cout << " This program asks the user to input the details of an employee and display the information\n";
    cout << "                       Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                                  Date: May 29, 2024\n";
    cout << "                       Subject Number: CMSC 28 - OOP 4 INHERITANCE\n";
    cout <<"========================================================================================\n";
}

int main() {
    progdescription(); // Display the program description

    // Get the number of employees from the user
    int numEmployees = getIntInput("Employees");
    list<Employees> employees; // Create a list to store Employees objects

    // Loop to get input for each employee
    for (int i = 0; i < numEmployees; i++) {
        employees.push_back(getEmployeesInput("Employee " + to_string(i + 1))); // Add a new Employees object to the list
    }

    // Loop to display details of each employee
    for (const Employees& employee : employees) {
        cout << "\nEMPLOYEE: " << employee.getfname() << " " << employee.getlname() << "\n";
        cout << "Gender: " << employee.getgender() << "\n";
        cout << "Email Address: " << employee.getEmailAdd() << "\n";
        cout << "Contact Number: " << employee.getCpNumber() << "\n";
        cout << "Employee Number: " << employee.getempNum() << "\n";
        cout << "Position: " << employee.Position << "\n";
        cout << "Office: " << employee.Office << "\n";
        cout << "Salary: " << employee.Salary << "\n";
    }

    return 0; // Exit the program
}
