// Written by: Gabrielle Xiane R. Bautista
// Date: May 22, 2024
// Subject: CMSC 28 - OOP ACTIVITY Inheritance and Encapsulation

#include "ProductInventory.h" // Including the header file that contains the Product, Clothing, and Electronics class definitions
#include <iostream> // For input-output operations
#include <stdlib.h> // For the system() function to clear the screen
#include <iomanip> // For std::fixed and std::setprecision

using namespace std;

// Function to display the program description and metadata
void progdescription() {
    cout <<"========================================================================================\n";
    cout << "                          HELLO, WELCOME TO MY PROGRAM!\n\n";
    cout << " This program asks the user to input the details of a product (clothing or electronics)\n";
    cout << "                               and display the information\n";
    cout << "                       Programmer: Gabrielle Xiane R. Bautista\n";
    cout << "                                  Date: May 22, 2024\n";
    cout << "         Subject Number: CMSC 28 - OOP ACTIVITY Inheritance and Encapsulation\n";
    cout <<"========================================================================================\n\n";
}

int main() {
    system("cls"); // Clear the screen/terminal at the beginning of the program (avoid cluttered output screen)

    progdescription(); // Display the program description

    // Create objects of the Clothing and Electronics classes
    Clothing shirt; // Object for storing clothing details
    Electronics gadget; // Object for storing electronics details
    string input; // Variable for capturing user input as string
    double price; // Variable for capturing the price input

    // Prompt user for clothing details
    cout << "ENTER DETAILS FOR THE CLOTHING\n" << endl; 

            cout << "Enter shirt name: ";
            getline(cin, input); // Get the name of the shirt
            shirt.setName(input); // Set the name of the shirt

            cout << "Enter shirt price: ";
            cin >> price; // Get the price of the shirt
            cin.ignore(); 
            shirt.setPrice(price); // Set the price of the shirt

            cout << "Enter shirt description: ";
            getline(cin, input); // Get the description of the shirt
            shirt.setDescription(input); // Set the description of the shirt

            cout << "Enter shirt size: ";
            getline(cin, input); // Get the size of the shirt
            shirt.setSize(input); // Set the size of the shirt

            cout << "Enter shirt color: ";
            getline(cin, input); // Get the color of the shirt
            shirt.setColor(input); // Set the color of the shirt

            cout << "Enter shirt material: ";
            getline(cin, input); // Get the material of the shirt
            shirt.setMaterial(input); // Set the material of the shirt

    // Prompt user for electronics details
    cout << "\nENTER DETAILS FOR THE ELECTRONICS\n" << endl; 

            cout << "Enter gadget name: ";
            getline(cin, input); // Get the name of the gadget
            gadget.setName(input); // Set the name of the gadget

            cout << "Enter gadget price: ";
            cin >> price; // Get the price of the gadget
            cin.ignore();
            gadget.setPrice(price); // Set the price of the gadget

            cout << "Enter gadget description: ";
            getline(cin, input); // Get the description of the gadget
            gadget.setDescription(input); // Set the description of the gadget

            cout << "Enter gadget brand: ";
            getline(cin, input); // Get the brand of the gadget
            gadget.setBrand(input); // Set the brand of the gadget

            cout << "Enter gadget model: ";
            getline(cin, input); // Get the model of the gadget
            gadget.setModel(input); // Set the model of the gadget

            cout << "Enter gadget warranty: ";
            getline(cin, input); // Get the warranty information of the gadget
            gadget.setWarranty(input); // Set the warranty of the gadget

            cout << "Enter gadget technical specifications: ";
            getline(cin, input); // Get the technical specifications of the gadget
            gadget.setTechnicalSpecifications(input); // Set the technical specifications of the gadget

    // Display the collected information
    cout << "\n\n================================ DISPLAYING INFORMATION ==================================\n" << endl; 
    // Header for display section (for aesthetic purposes)

            // Display clothing information
            cout << "Clothing Product Information\n" << endl; 
            cout << "Name: " << shirt.getName() << endl; 
            cout << "Price: " << std::fixed << std::setprecision(2) << shirt.getPrice() << endl; // Display price with 2 decimal places
            cout << "Description: " << shirt.getDescription() << endl; 
            cout << "Size: " << shirt.getSize() << endl; 
            cout << "Color: " << shirt.getColor() << endl; 
            cout << "Material: " << shirt.getMaterial() << endl; 

            // Display electronics information
            cout << "\n\nElectronics Product Information\n" << endl;
            cout << "Name: " << gadget.getName() << endl; 
            cout << "Price: " << std::fixed << std::setprecision(2) << gadget.getPrice() << endl; // Display price with 2 decimal places
            cout << "Description: " << gadget.getDescription() << endl; 
            cout << "Brand: " << gadget.getBrand() << endl; 
            cout << "Model: " << gadget.getModel() << endl; 
            cout << "Warranty: " << gadget.getWarranty() << endl; 
            cout << "Technical Specifications: " << gadget.getTechnicalSpecifications() << endl; 

    return 0; // End of program YEHEY
}