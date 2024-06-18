#include <iostream>

using namespace std; // Using standard namespace to avoid writing std:: in every line of code

// Function to display program description
void progdescription() {
    cout << "========================================================================================\n";
    cout << "                          HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << "This program asks the user to input an integer and converts it to its binary equivalent.\n";
    cout << "                  Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                            Date: April 26, 2024\n";
    cout << "             Subject Number: CMSC 28 - Decimal to Binary Converter\n";
    cout << "========================================================================================\n";
}

// Function to read data
void readdata(int& num) {
    cout << "Enter an integer: ";
    cin >> num;
}

// Function to convert decimal to binary
string decimal_to_binary(int num) {
    
    /* We use a string to represent the binary number because binary numbers are sequences of 0s and 1s, which can be conveniently modeled as strings. Additionally, strings can contain leading zeros, which are significant in binary numbers. If we were to use an int to store the binary number, it would not preserve leading zeros, because leading zeros are not significant in decimal numbers. */

    string binary = "";
    while (num > 0) {
        if (num % 2 == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        num = num / 2;
    }
    return binary;
}

// Function to display data
void showdata(int num, string binary) {
    cout << "The binary equivalent of " << num << " is: " << binary << "\n";
}

int main() {
    // Variable declarations for the integer num and its binary equivalent
    int num;
    string binary;

    // Calls the function to display program description
    progdescription();

    // Calls the function to read the data of the integer num
    readdata(num);

    // Calls the function that converts decimal to binary
    binary = decimal_to_binary(num);

     // Calls the function that displays the data
    showdata(num, binary);

    return 0;
}