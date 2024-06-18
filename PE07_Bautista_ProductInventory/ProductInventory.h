// Written by: Gabrielle Xiane R. Bautista
// Date: May 22, 2024
// Subject: CMSC 28 - OOP ACTIVITY Inheritance and Encapsulation

#include <string>

using namespace std;

// Base class for all products
class Product {
    private:
        // Private member variables to store product details
        string name; // Name of the product
        double price; // Price of the product
        string description; // Description of the product

    public:
        // Public member functions to set and get the private member variables


    // SETTERS AND GETTERS

        // Set the name of the product
        void setName(string n) { 
            name = n; 
        }

        // Set the price of the product
        void setPrice(double p) { 
            price = p; 
        }

        // Set the description of the product
        void setDescription(string d) { 
            description = d; 
        }

        // Get the name of the product
        string getName() { 
            return name; 
        }

        // Get the price of the product
        double getPrice() { 
            return price; 
        }

        // Get the description of the product
        string getDescription() { 
            return description; 
        }
};

// Derived class from Product for clothing items
class Clothing : public Product {
    private:
        // Private member variables to store clothing-specific details
        string size; // Size of the clothing item
        string color; // Color of the clothing item
        string material; // Material of the clothing item

    public:
        // Public member functions to set and get the private member variables

    // SETTERS AND GETTERS

        // Set the size of the clothing item
        void setSize(string s) { 
            size = s; 
        }

        // Set the color of the clothing item
        void setColor(string c) { 
            color = c; 
        }

        // Set the material of the clothing item
        void setMaterial(string m) { 
            material = m; 
        }

        // Get the size of the clothing item
        string getSize() { 
            return size; 
        }

        // Get the color of the clothing item
        string getColor() { 
            return color; 
        }

        // Get the material of the clothing item
        string getMaterial() { 
            return material; 
        }
};

// Derived class from Product for electronics items
class Electronics : public Product {
    private:
        // Private member variables to store electronics-specific details
        string brand; // Brand of the electronic item
        string model; // Model of the electronic item
        string warranty; // Warranty information of the electronic item
        string technicalSpecifications; // Technical specifications of the electronic item

    public:
        // Public member functions to set and get the private member variables

    // SETTERS AND GETTERS
    
        // Set the brand of the electronic item
        void setBrand(string b) { 
            brand = b; 
        }

        // Set the model of the electronic item
        void setModel(string m) { 
            model = m; 
        }

        // Set the warranty information of the electronic item
        void setWarranty(string w) { 
            warranty = w; 
        }

        // Set the technical specifications of the electronic item
        void setTechnicalSpecifications(string ts) { 
            technicalSpecifications = ts; 
        }

        // Get the brand of the electronic item
        string getBrand() { 
            return brand; 
        }

        // Get the model of the electronic item
        string getModel() { 
            return model; 
        }

        // Get the warranty information of the electronic item
        string getWarranty() { 
            return warranty; 
        }

        // Get the technical specifications of the electronic item
        string getTechnicalSpecifications() { 
            return technicalSpecifications; 
        }
};
