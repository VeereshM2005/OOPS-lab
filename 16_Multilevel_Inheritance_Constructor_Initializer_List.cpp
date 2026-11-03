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

Program Title : Multilevel Inheritance Using
                Constructor Initializer List

Concept Used:
- Class and Object
- Multilevel Inheritance
- Base Class and Derived Class
- Public Inheritance
- Constructors
- Parameterized Constructor
- Constructor Initializer List
- Constructor Calling
- Member Functions
- String Data Type

Description:
This program demonstrates multilevel inheritance
using Person, Student and IT_Student classes.

Person is the base class.
Student inherits from Person.
IT_Student inherits from Student.

The IT_Student constructor uses an initializer
list to call the Student constructor.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:

    void display1()
    {
        cout << "Person Class" << endl;
    }
};

// Derived class
class Student : public Person
{
public:

    Student()
    {
    }

    void display2()
    {
        cout << "Student Class" << endl;
    }
};

// Derived class from Student
class IT_Student : public Student
{
public:

    // Constructor using initializer list
    IT_Student(string a, string b, float c)
        : Student()
    {
        cout << "IT Student Details Initialized" << endl;
    }

    void display3()
    {
        cout << "IT_Student Class" << endl;
    }
};

int main()
{
    // Creating objects
    Person p;
    Student s;
    IT_Student i("Kingson", "01FE23BEC331", 8.57);

    p.display1();

    cout << endl;

    s.display2();
    s.display1();

    cout << endl;

    i.display3();
    i.display2();
    i.display1();

    return 0;
}
```
