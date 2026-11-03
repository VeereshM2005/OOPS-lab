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

Program Title : Student Result Calculation Using
                Multiple Inheritance (Five Subjects)

Concept Used:
- Class and Object
- Multiple Inheritance
- Base Class and Derived Class
- Public Inheritance
- Protected Access Specifier
- Parameterized Constructor
- Constructor Initializer List
- Array
- For Loop
- User Input
- Data Members
- Member Functions
- Total Marks Calculation
- Percentage Calculation
- Data Hiding

Description:
This program demonstrates multiple inheritance.

The Student class stores roll number and name.
The Test class stores marks of five subjects.
The Result class inherits from both Student
and Test.

The Result class calculates total marks out of 500
and percentage, then displays student information.

=========================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Student
{
protected:
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
protected:
    int marks[5];

public:

    // Input marks of five subjects
    void input_marks()
    {
        cout << "Enter the Subject Marks out of 100"
             << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the Marks of "
                 << i + 1 << "th Subject: ";

            cin >> marks[i];
        }
    }
};

// Derived class
class Result : public Student, public Test
{
    int total_marks;
    float percentage;

public:

    // Constructor initializer list
    Result(int a, string b)
        : Student(a, b)
    {
    }

    // Calculate total marks
    void calculate_total_marks()
    {
        total_marks = marks[0] + marks[1]
                    + marks[2] + marks[3]
                    + marks[4];
    }

    // Calculate percentage
    void calculate_percentage()
    {
        percentage = total_marks / 5.0;
    }

    // Display student result
    void display_result()
    {
        cout << "\nStudent Name: " << name;
        cout << "\nRoll No: " << roll_no;

        for (int i = 0; i < 5; i++)
        {
            cout << "\n" << i + 1
                 << "th Subject Marks: " << marks[i];
        }

        cout << "\nTotal Marks: "
             << total_marks << "/500";

        cout << "\nPercentage: "
             << percentage << "%" << endl;
    }
};

int main()
{
    // Creating Result object
    Result r1(632, "Kingson");

    // Input subject marks
    r1.input_marks();

    // Calculate total marks
    r1.calculate_total_marks();

    // Calculate percentage
    r1.calculate_percentage();

    // Display result
    r1.display_result();

    return 0;
}
```
