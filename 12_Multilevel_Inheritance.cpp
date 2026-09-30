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

Concept Used:
- Class and Object
- Inheritance
- Multilevel Inheritance
- Base Class
- Derived Class
- Public Inheritance

Description:
This program demonstrates multilevel inheritance in C++.

The 'person' class is the base class.
The 'student' class inherits from the 'person' class.
The 'ITstudent' class then inherits from the 'student' class.

Therefore, the inheritance occurs across multiple levels:

        person
           |
        student
           |
       ITstudent

The ITstudent class can access the public member functions
of both student and person.

=========================================================
*/

#include <iostream>
using namespace std;

// Base class
class person
{
public:

    // Function of person class
    void display1()
    {
        cout << "\nPerson class";
    }
};

// Derived class from person
class student : public person
{
public:

    // Function of student class
    void display2()
    {
        cout << "\nStudent class";
    }
};

// Derived class from student
class ITstudent : public student
{
public:

    // Function of ITstudent class
    void display3()
    {
        cout << "\nITstudent class";
    }
};

int main()
{
    // Creating objects of each class
    person p1;
    student s1;
    ITstudent i1;

    // Calling person class function
    p1.display1();

    // Student object can access its own and inherited functions
    s1.display2();
    s1.display1();

    // ITstudent object can access functions from all three levels
    i1.display3();
    i1.display2();
    i1.display1();

    return 0;
}
```
