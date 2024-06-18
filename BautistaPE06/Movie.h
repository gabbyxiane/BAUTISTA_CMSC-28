
#include <iostream>
#include <list>
#include <iterator>
#include "Person.h" // Include Person.h to use the Person class

using namespace std;

// Movie class definition
class Movie {
    
    // Private member variables
    private:
        list<Person> directors;   // List to store director objects
        list<Person> actors;      // List to store actor objects
        string title;             // String to store the movie title
        string synopsis;          // String to store the movie synopsis
        list<string> genres;      // List to store genres of the movie
        string MPAARating;        // String to store the MPAA rating of the movie

    // Public member functions
    public:
        // Constructor to initialize all member variables
        Movie(list<Person> directors, list<Person> actors, string title, string synopsis, list<string> genres, string MPAARating) 
            : directors(directors), actors(actors), title(title), synopsis(synopsis), genres(genres), MPAARating(MPAARating) {}

        // Getters
        list<Person> getDirectors() {
            return directors;
        }

        list<Person> getActors() {
            return actors;
        }

        string getTitle() {
            return title;
        }

        string getSynopsis() {
            return synopsis;
        }

        list<string> getGenres() {
            return genres;
        }

        string getMPAARating() {
            return MPAARating;
        }

        // Setters
        void setDirectors(list<Person> newDirectors) {
            directors = newDirectors;
        }

        void setActors(list<Person> newActors) {
            actors = newActors;
        }

        void setTitle(string newTitle) {
            title = newTitle;
        }

        void setSynopsis(string newSynopsis) {
            synopsis = newSynopsis;
        }

        void setGenres(list<string> newGenres) {
            genres = newGenres;
        }

        void setMPAARating(string newMPAARating) {
            MPAARating = newMPAARating;
        }

        // Function to display the details of the movie
        void view() {
            // Display the movie title
            cout << "\nMOVIE DETAILS\n";
            cout << "Movie Title: " << title << endl;
            
            // Display the movie synopsis
            cout << "Synopsis: " << synopsis << endl;
            
            // Display the MPAA rating
            cout << "MPAA Rating: " << MPAARating << endl;

            // Display the genres
            cout << "Genre/s: \n";
            int genreCount = 1;
            for (list<string>::iterator it = genres.begin(); it != genres.end(); ++it) {
                cout << genreCount++ << ". " << *it;
                // Add a newline if not the last genre
                if (next(it) != genres.end()) cout << "\n";
            }

            // Display the directors
            cout << "\nDirector/s: \n";
            int directorCount = 1;
            for (list<Person>::iterator it = directors.begin(); it != directors.end(); ++it) {
                // Use the getName() and getgender() methods of the Person class
                cout << directorCount++ << ". " << it->getName() << ", Gender: " << it->getgender();
                // Add a newline if not the last director
                if (next(it) != directors.end()) cout << "\n";
            }

            // Display the actors
            cout << "\nActor/s: \n";
            int actorCount = 1;
            for (list<Person>::iterator it = actors.begin(); it != actors.end(); ++it) {
                // Use the getName() and getgender() methods of the Person class
                cout << actorCount++ << ". " << it->getName() << ", Gender: " << it->getgender();
                // Add a newline if not the last actor
                if (next(it) != actors.end()) cout << "\n";
            }
            cout << endl; 
        }
};
