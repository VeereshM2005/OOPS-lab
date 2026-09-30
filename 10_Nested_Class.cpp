```cpp
/*
=========================================================
                    OOPS LAB PROGRAM
=========================================================

Name          : Veeresh B Muragod
Roll No       : 116
Division      : A
SRN           : 01FE24BEC416
Semester      : 7th Semester

Program Title : Demonstration of Nested Class

Concept Used:
- Class and Object
- Nested Class
- Private Data Members
- Member Functions
- Scope Resolution Operator (::)

Description:
This program demonstrates the concept of a nested class
in C++. A class named 'engine' is declared inside the
'car' class.

The outer class 'car' stores information about the car's
mileage and average. The nested class 'engine' stores
information about the engine type and fuel type.

The nested class can be accessed outside the outer class
using the syntax:

    car::engine e1;

=========================================================
*/

#include <iostream>
using namespace std;

// Outer class
class car
{
private:
    // Private data members of car
    float milage;
    int average;

public:

    // Function to input car details
    void get()
    {
        cout << "Enter the mileage: ";
        cin >> milage;

        cout << "Enter the average: ";
        cin >> average;
    }

    // Function to display car details
    void display()
    {
        cout << "The mileage of car: " << milage << endl;
        cout << "The car average: " << average << endl;
    }

    // Nested class
    class engine
    {
    private:
        char type;
        string fuel;

    public:

        // Function to input engine details
        void get()
        {
            cout << "Enter the type of engine: ";
            cin >> type;

            cout << "Enter the fuel type: ";
            cin >> fuel;
        }

        // Function to display engine details
        void display()
        {
            cout << "Engine Type: " << type << endl;
            cout << "Fuel Type: " << fuel << endl;
        }
    };
};

int main()
{
    // Creating object of outer class
    car c1;

    // Creating object of nested class
    car::engine e1;

    // Input and display car details
    c1.get();
    c1.display();

    // Input and display engine details
    e1.get();
    e1.display();

    return 0;
}
```
