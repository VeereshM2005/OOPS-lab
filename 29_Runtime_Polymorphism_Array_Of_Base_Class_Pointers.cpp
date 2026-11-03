```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 28: Runtime Polymorphism Using an Array of Pointers
Concept: Virtual Function and Array of Base Class Pointers
Description:
Demonstrates runtime polymorphism using an array of
base class pointers.
*/

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Generic Shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void draw() override {
        cout << "Square" << endl;
    }
};

// Derived class 3
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Triangle" << endl;
    }
};

int main() {
    // Create derived class objects
    Circle c;
    Square s;
    Triangle t;

    // Array of base class pointers
    Shape* shapes[3] = {&c, &s, &t};

    // Call draw() using a loop
    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();
    }

    return 0;
}
```
