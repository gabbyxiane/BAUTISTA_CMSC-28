#include "Movie.h"
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

// Function to get user input for a Person object
Person getPersonInput(string prompt) {
    string fname, lname, gender;
    // Display prompt to the user
    cout << "Enter details for " << prompt << ":\n";
    cout << "Enter first name: ";
    // Read the first name
    getline(cin, fname);
    cout << "Enter last name: ";
    // Read the last name
    getline(cin, lname);
    cout << "Enter gender: ";
    // Read the gender
    getline(cin, gender);
    // Return a new Person object constructed with the provided details
    return Person(fname, lname, gender);
}

// Function to get user input for a string
string getStringInput(string prompt) {
    cout << "Enter " << prompt << ": ";
    string input;
    // Read the entire line for the string input
    getline(cin, input);
    return input;
}

// Function to get user input for an integer
int getIntInput(string prompt) {
    cout << "Enter number of " << prompt << ": ";
    int input;
    // Read the integer input
    cin >> input;
    // Clear the newline character left in the input buffer
    cin.ignore();  
    return input;
}

// Function to display the program description
void progdescription() {
    cout <<"========================================================================================\n";
    cout << "                          HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << " This program asks the user to input the details of a movie and display the information\n";
    cout << "                       Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                                  Date: May 17, 2024\n";
    cout << "                       Subject Number: CMSC 28 - OOP ACTIVITY 3\n";
    cout <<"========================================================================================\n";
}

int main() {
    // Display the program description
    progdescription();

    // Get the movie title from the user
    string title = getStringInput("Movie Title");
    // Get the movie synopsis from the user
    string synopsis = getStringInput("Synopsis");
    // Get the MPAA rating from the user
    string MPAARating = getStringInput("MPAA Rating");

    // Get the number of genres from the user
    int numGenres = getIntInput("Genres");
    list<string> genres;
    // Loop to get each genre and add to the list
    for (int i = 0; i < numGenres; i++) {
        genres.push_back(getStringInput("Genre " + to_string(i + 1)));
    }

    // Get the number of directors from the user
    int numDirectors = getIntInput("Directors");
    list<Person> directors;
    // Loop to get details for each director and add to the list
    for (int i = 0; i < numDirectors; i++) {
        directors.push_back(getPersonInput("Director " + to_string(i + 1)));
    }

    // Get the number of actors from the user
    int numActors = getIntInput("Actors");
    list<Person> actors;
    // Loop to get details for each actor and add to the list
    for (int i = 0; i < numActors; i++) {
        actors.push_back(getPersonInput("Actor " + to_string(i + 1)));
    }

    // Create a Movie object with the gathered information
    Movie movie(directors, actors, title, synopsis, genres, MPAARating);

    // Display the movie information
    movie.view();

    return 0;
}
