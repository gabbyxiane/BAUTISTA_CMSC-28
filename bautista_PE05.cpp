#include <iostream>

using namespace std; 

// Maximum size of the array (According to the program specification, the maximum size of the array is 10)
const int MAX_SIZE = 10;

// Function to display program description
void progdescription() {
    cout << "==============================================================================================\n";
    cout << "                             HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << "This program will ask the user to input various numbers (positive or negative but not zero)\n";
    cout << "                       and perform basic statistics on these numbers.\n";
    cout << "                          Submitted by: Gabrielle Xiane R. Bautista\n";
    cout << "                                      Date: May 11, 2024\n";
    cout << "==============================================================================================\n\n";
}

// Function to get user input into an array
void get_user_input(int arr[], int& size) {
    int num;
    // Loop to input numbers until user enters 0 or array is full
    for(size = 0; size < MAX_SIZE; size++) {
        cout << "Input an integer: ";
        cin >> num;
        if(num == 0) break; // Break the loop if user enters 0
        arr[size] = num; // Store the input in the array
    }
}

// Function to find the largest number in the array
int find_largest(int arr[], int size) {
    if(size == 0) return 0; // Return 0 if user entered 0
    int largest = arr[0];
    // Loop to compare each element with the current largest
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) largest = arr[i]; // Update largest if current element is greater
    }
    return largest; // Return the largest number
}

// Function to find the smallest number in the array
int find_smallest(int arr[], int size) {
    if(size == 0) return 0; // Return 0 if user entered 0
    int smallest = arr[0];
    // Loop to compare each element with the current smallest
    for(int i = 1; i < size; i++) {
        if(arr[i] < smallest) smallest = arr[i]; // Update smallest if current element is smaller
    }
    return smallest; // Return the smallest number
}

// Function to find the average of numbers in the array
double find_average(int arr[], int size) {
    int sum = 0;
    // Loop to calculate sum of all elements in the array
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size; // Calculate and return the average
}

// Function to calculate power of a number
double power(double base, int exponent) {
    double result = 1;
    // Loop to multiply base by itself exponent times
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result; // Return the result
}

// Function to calculate square root using Newton's method (Code Source/Inspiration: GeeksforGeeks)
double sqrt(double number) {
    double guess = number;
    double accuracy = 0.00001; // Set the accuracy for the square root
    // Loop to improve the guess until it's accurate enough
    while ((guess - number/guess) > accuracy) { // Loop until the difference is less than accuracy
        guess = 0.5 * (guess + number/guess);
    }
    return guess; // Return the square root
}

// Function to find the standard deviation of numbers in the array
double find_standard_deviation(int arr[], int size, double average) {
    double sum = 0;
    // Loop to calculate sum of squares of differences from the mean
    for(int i = 0; i < size; i++) {
        sum += power(arr[i] - average, 2);
    }
    return sqrt(sum / size); // Calculate and return the standard deviation
}

// Function to find the variance from standard deviation
double find_variance(double standardDeviation) {
    return power(standardDeviation, 2); // Return the square of the standard deviation
}

// Function to display the results
void display_results(int largest, int smallest, double average, double standardDeviation, double variance) {
    cout << "Largest = " << largest << "\n";
    cout << "Smallest = " << smallest << "\n";
    cout << "Average = " << average << "\n";
    cout << "Standard deviation = " << standardDeviation << "\n";
    cout << "Variance = " << variance << "\n";
}

// Main function
int main() {
    // Display program description
    progdescription(); 

    // Declare an array to store user input numbers
    int arr[MAX_SIZE];

    // Variable to store size of array
    int size; 
     // Get user input to populate the array
    get_user_input(arr, size);

    // Function call to find the largest number
    int largest = find_largest(arr, size);

    // Function call to find the smallest number
    int smallest = find_smallest(arr, size);     

    // Function call to find the average of the numbers
    double average = find_average(arr, size);

    // Function call to find the standard deviation
    double standardDeviation = find_standard_deviation(arr, size, average);

    // Function call to find the variance
    double variance = find_variance(standardDeviation);

    // Function call to display the results of the largest number, smallest number, average, standard deviation, and variance
    display_results(largest, smallest, average, standardDeviation, variance); 

    return 0; // BOOGSH Return from main function 
}
