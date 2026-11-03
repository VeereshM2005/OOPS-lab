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

Program Title : Demonstration of Multilevel Inheritance
                Using Vehicle, Car and Sports Car

Concept Used:
- Class and Object
- Inheritance
- Multilevel Inheritance
- Base Class
- Derived Class
- Public Inheritance
- Data Members
- Member Functions

Description:
This program demonstrates multilevel inheritance in C++.

The 'vehicle' class is the base class.
The 'car' class inherits from the 'vehicle' class.
The 'sports_car' class inherits from the 'car' class.

Therefore, inheritance occurs across three levels:

        vehicle
           |
          car
           |
       sports_car

The car class can access the public members of vehicle.
The sports_car class can access the public members of
both vehicle and car.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class vehicle
{
    int no_of_wheels = 4;
    int no_of_doors = 5;

public:

    // Function of vehicle class
    void display1()
    {
        cout << "The vehicle class:";
        cout << "\nNo. of Wheels: " << no_of_wheels;
        cout << "\nNo. of Doors: " << no_of_doors << endl;
    }
};

// Derived class from vehicle
class car : public vehicle
{
    string color = "Blue";
    string type = "SUV";

public:

    // Function of car class
    void display2()
    {
        cout << "The color: " << color;
        cout << "\nThe Type: " << type << endl;
    }
};

// Derived class from car
class sports_car : public car
{
    int cc = 1400;

public:

    // Function of sports_car class
    void display3()
    {
        cout << "The CC is: " << cc << endl;
    }
};

int main()
{
    // Creating objects of each class
    vehicle v;
    car c;
    sports_car s;

    // Calling vehicle class function
    v.display1();

    cout << endl;

    // Calling functions using car object
    c.display1();
    c.display2();

    cout << endl;

    // Calling functions using sports_car object
    s.display1();
    s.display2();
    s.display3();

    return 0;
}
```
