#include <iostream>
#include "Book.h"

int main() {
    // Create a Book object
    Book testbook("Ang Pagong at ang Matsing", "X. Gabby Bautista", "9715082823", "Trubner's Oriental Record");

    // Test getters
    cout << "Title: " << testbook.getTitle() << endl;
    cout << "Author: " << testbook.getAuthor() << endl;
    cout << "ISBN: " << testbook.getISBN() << endl;
    cout << "Publisher: " << testbook.getPublisher() << endl;
    endl(cout);

    // Test setters
    testbook.setTitle("The Monkey and the Turtle");
    testbook.setAuthor("Gabby Bautista");
    testbook.setISBN("9780451524935");
    testbook.setPublisher("Bookware Publishing Corp");

    // Test getters again to see if setters worked
    cout << "Title: " << testbook.getTitle() << endl;
    cout << "Author: " << testbook.getAuthor() << endl;
    cout << "ISBN: " << testbook.getISBN() << endl;
    cout << "Publisher: " << testbook.getPublisher() << endl;

    return 0;
}