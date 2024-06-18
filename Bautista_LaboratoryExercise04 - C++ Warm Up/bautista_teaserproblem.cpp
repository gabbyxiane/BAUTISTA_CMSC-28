#include <iostream>

using namespace std; // Using standard namespace to avoid writing std:: in every line of code

// Function to display program description
void progdescription() {
    cout << "================================================================================\n";
    cout << "                      HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << "This program is using C++ that asks the user to input three numbers (x, y, z),\n";
    cout << "     and find the highest and lowest number, and output their difference.\n";
    cout << "                Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                         Date: April 26, 2024\n";
    cout << "                Subject Number: CMSC 28 - C++ Warm Up\n";
    cout << "================================================================================\n";
}

// Function to read data of x, y, z
void readdata(int& x, int& y, int& z) {
    cout << "\nEnter three numbers (x, y, z): ";
    cin >> x >> y >> z;
}

// Function to get the smallest value
int getsmall(int x, int y, int z) {
    int temp = x; // Temporary variable to store the value of x
    if (y < temp) {
        temp = y;
    }
    if (z < temp) {
        temp = z;
    }
    return temp; // Returns the smallest value
}

// Function to get the largest value
int getlarge(int x, int y, int z) {
    int temp = x; // Temporary variable to store the value of x
    if (y > temp) {
        temp = y;
    }
    if (z > temp) {
        temp = z;
    }
    return temp; // Returns the largest value
}

// Function to display data of x, y, z, smallest value, largest value, and their difference
void showdata(int x, int y, int z, int smallval, int largeval, int diff) {
    cout << "x: " << x << ", y: " << y << ", z: " << z << "\n";
    cout << "Smallest value: " << smallval << "\n";
    cout << "Largest value: " << largeval << "\n";
    cout << "Difference: " << diff << "\n";
}

int main() {

    // Variable declarations for the three numbers, smallest value, largest value, and their difference
    int x, y, z, smallval, largeval, diff; 

    // Calls the function to display program description
    progdescription();

    // Calls the function to read the data of (x, y, z)
    readdata(x, y, z);

    // Calls the function that gets the smallest and largest values
    smallval = getsmall(x, y, z);
    largeval = getlarge(x, y, z);

    // Calls the function that calculates the difference between the largest and smallest values
    diff = largeval - smallval;

    // Calls the function that displays all the data
    showdata(x, y, z, smallval, largeval, diff);

    return 0;
}