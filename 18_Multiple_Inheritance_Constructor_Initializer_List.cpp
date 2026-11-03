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

Program Title : Multiple Inheritance Using
                Constructor Initializer List

Concept Used:
- Class and Object
- Multiple Inheritance
- Base Class and Derived Class
- Public Inheritance
- Parameterized Constructor
- Constructor Initializer List
- Constructor Calling
- Data Members
- Member Functions

Description:
This program demonstrates multiple inheritance.

The Student class stores roll number and name.
The Test class stores marks.
The Result class inherits from both Student
and Test.

The Result constructor uses an initializer list
to initialize both base classes and its own members.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Student
{
    int roll_no;
    string name;

public:

    // Parameterized constructor
    Student(int a, string b)
        : roll_no(a), name(b)
    {
    }
};

// Base class 2
class Test
{
    int marks;

public:

    // Parameterized constructor
    Test(int c) : marks(c)
    {
    }
};

// Derived class
class Result : public Student, public Test
{
    int total_marks;
    float percentage;

public:

    // Constructor initializer list
    Result(int d, float e, int r, string n, int m)
        : Student(r, n),
          Test(m),
          total_marks(d),
          percentage(e)
    {
    }

    // Display function
    void display()
    {
        cout << "This is the total marks : "
             << total_marks << endl;

        cout << "This is the percentage : "
             << percentage << endl;
    }
};

int main()
{
    // Creating Result object
    Result r1(97, 85.7, 632, "Kingson", 65);

    // Calling display function
    r1.display();

    return 0;
}
```
