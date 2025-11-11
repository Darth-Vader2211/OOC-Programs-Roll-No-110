#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // --- Unary Operator Overloading ---
    Complex operator-() { // Overload unary minus
        return Complex(-real, -imag);
    }

    Complex operator++() { // Prefix increment
        ++real;
        ++imag;
        return *this;
    }

    Complex operator++(int) { // Postfix increment
        Complex temp = *this;
        real++;
        imag++;
        return temp;
    }

    // --- Binary Operator Overloading ---
    Complex operator+(const Complex &obj) { // Add two complex numbers
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator-(const Complex &obj) { // Subtract two complex numbers
        return Complex(real - obj.real, imag - obj.imag);
    }

    // --- Relational Operator Overloading ---
    bool operator==(const Complex &obj) const {
        return (real == obj.real && imag == obj.imag);
    }

    bool operator!=(const Complex &obj) const {
        return !(*this == obj);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3;

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    // Binary Operators
    c3 = c1 + c2;
    cout << "\nAddition (c1 + c2): ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction (c1 - c2): ";
    c3.display();

    // Unary Operators
    c3 = -c1;
    cout << "\nUnary Minus (-c1): ";
    c3.display();

    cout << "\nPrefix Increment (++c1): ";
    (++c1).display();

    cout << "Postfix Increment (c1++): ";
    (c1++).display();

    cout << "After Postfix Increment, c1 = ";
    c1.display();

    // Relational Operators
    Complex c4(4, 5);
    cout << "\nComparing c1 and c4:\n";
    if (c1 == c4)
        cout << "c1 and c4 are equal\n";
    else
        cout << "c1 and c4 are not equal\n";

    if (c1 != c2)
        cout << "c1 and c2 are not equal\n";
    else
        cout << "c1 and c2 are equal\n";

    return 0;
}