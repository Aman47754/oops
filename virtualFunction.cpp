//A virtual function in C++ is a member function declared in a base class using the virtual keyword, 
//and it is meant to be overridden in derived classes. Virtual functions enable runtime polymorphism,
// allowing you to call derived class methods through a base class pointer or reference.

//Key Points:
//-Declared with the virtual keyword in the base class.
//-Allows derived classes to provide their own implementation.
//-Enables dynamic binding (function call is resolved at runtime).
//-If a base class pointer points to a derived class object, the derived class’s overridden function is called.


#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { // Virtual function
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw(); // Output: Drawing Circle (calls derived class function)
    delete s;
    return 0;
}