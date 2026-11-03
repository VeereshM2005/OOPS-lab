```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 29: Abstract Class Vehicle
Concept: Abstract Class and Pure Virtual Function
Description:
Demonstrates an abstract Vehicle class with Car and Bike
as derived classes.
*/

#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    float mileage = 1.1;

    // Pure virtual function
    virtual float disp_mileage() = 0;
};

// Derived class Car
class Car : public Vehicle {
public:
    float disp_mileage() override {
        return mileage * 2;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    float disp_mileage() override {
        return mileage * 4;
    }
};

int main() {
    Car c;
    Bike b;

    Vehicle* v1 = &c;
    Vehicle* v2 = &b;

    cout << "Car mileage: " << v1->disp_mileage() << endl;
    cout << "Bike mileage: " << v2->disp_mileage() << endl;

    return 0;
}
```
