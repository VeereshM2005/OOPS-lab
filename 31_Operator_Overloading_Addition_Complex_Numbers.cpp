```cpp
/*
Name       : Veeresh B Muragod
Roll No    : 116
Division   : A
SRN        : 01FE24BEC416
Semester   : 7th Semester

Program 30: Addition of Complex Numbers
Concept: Binary Operator Overloading
Description:
Adds two complex numbers using the overloaded + operator.
*/

#include <iostream>
using namespace std;

class Complex {
    float re, im;

public:
    // Parameterized constructor
    Complex(float r = 0, float i = 0) {
        re = r;
        im = i;
    }

    // Overloading + operator
    Complex operator+(const Complex& c) {
        return Complex(re + c.re, im + c.im);
    }

    // Display complex number
    void show() {
        cout << re << " + " << im << "i" << endl;
    }
};

int main() {
    Complex a(2, 3);
    Complex b(4, 5);

    // Addition using overloaded operator
    Complex c = a + b;

    cout << "Sum: ";
    c.show();

    return 0;
}
```
