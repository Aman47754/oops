// Polymorphism in object-oriented programming (OOP) is the ability of a function, object, or method to take on many forms. It allows the 
//same interface or function name to behave differently based on the object or data type it is acting upon.

// In C++, polymorphism is mainly of two types:

// Compile-time polymorphism (e.g., function overloading, operator overloading)
// Run-time polymorphism (e.g., using virtual functions and inheritance)

#include<iostream>
using namespace std;

//********Function Overloading ******

// -defn
//Function overloading- in C++ is a feature that allows you to define multiple functions with the same name but different parameter lists
// (different type, number, or order of parameters). The correct function is chosen at compile time based on the arguments passed.

class Calculator {
public:
    // Add two integers
    int add(int a, int b) {
        cout << "Adding two integers: ";
        return a + b;
    }

    // Add two doubles
    double add(double a, double b) {
        cout << "Adding two doubles: ";
        return a + b;
    }

    // Add three integers
    int add(int a, int b, int c) {
        cout << "Adding three integers: ";
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << calc.add(2, 3) << endl;         // Calls add(int, int)
    cout << calc.add(2.5, 3.7) << endl;     // Calls add(double, double)
    cout << calc.add(1, 2, 3) << endl;      // Calls add(int, int, int)
    return 0;
}


//***********  Operator overloading *****/

//defn-
//Operator overloading in C++ allows you to redefine the way operators work for user-defined types (like classes).
// This means you can specify how operators such as +, -, *, ==, etc., behave when applied to objects of your class.

//one example is -> + operator-> using + operator we can add to numbers as well as we can concatenate two strings

// if we want to add 2 complex number we cant do just by doing addition operator between them bcz when we define a 
//class of complex number then we can add two object of class-Complex  .it will give error to add this using simply by using + operator we have to do operator overloading

//syntax--
// return_type operator op (parameter_list) {
//     // body of operator function
// }

class Complex {
    int real, imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Overload + operator to add two Complex numbers
    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(2, 3);
    Complex c2(1, 4);
    Complex c3 = c1 + c2; // Uses overloaded +
    //in above line c1 is calling object of the operator
    c3.display(); // Output: 3 + 7i
    return 0;
}


