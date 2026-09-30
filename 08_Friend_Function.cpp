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

Program Title : Addition of Two Numbers Using Friend Function

Concept Used:
- Class and Object
- Friend Function
- Private Data Members
- Member Function
- Encapsulation

Description:
This program demonstrates the use of a friend function
in C++.

The class 'numbers' contains two private data members,
num1 and num2. The friend function 'add()' is declared
inside the class and is allowed to access these private
members directly.

The add() function calculates and returns the sum of the
two numbers.

=========================================================
*/

#include <iostream>
using namespace std;

class numbers
{
private:
    // Private data members
    int num1, num2;

public:

    // Member function declaration
    void setdata(int, int);

    // Friend function declaration
    friend int add(numbers N);
};

// Member function definition
void numbers::setdata(int a, int b)
{
    num1 = a;
    num2 = b;
}

// Friend function definition
int add(numbers N)
{
    // Friend function can access private members
    return (N.num1 + N.num2);
}

int main()
{
    // Creating an object of numbers class
    numbers N1;

    // Setting values
    N1.setdata(10, 5);

    // Calling the friend function
    cout << "Sum = " << add(N1);

    return 0;
}
```
