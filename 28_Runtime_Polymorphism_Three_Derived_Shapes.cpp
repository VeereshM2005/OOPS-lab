```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 28: Runtime Polymorphism Using Three Derived Classes
Concept: Virtual Function and Function Overriding
Description:
Demonstrates runtime polymorphism using one base class
and three derived classes.
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

// First derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

// Second derived class
class Square : public Shape {
public:
    void draw() override {
        cout << "Square" << endl;
    }
};

// Third derived class
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Triangle" << endl;
    }
};

int main() {
    Circle c;
    Square s;
    Triangle t;

    // Base class pointers
    Shape* s1 = &c;
    Shape* s2 = &s;
    Shape* s3 = &t;

    // Runtime polymorphism
    s1->draw();
    s2->draw();
    s3->draw();

    return 0;
}
```
