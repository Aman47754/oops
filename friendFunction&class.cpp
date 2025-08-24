//Friend Function

//A friend function is a function that is not a member of a class but has permission to access its private and protected members.

#include <iostream>
using namespace std;

class Box {
    private:
        int length;
    public:
        Box(int l) : length(l) {}
        friend void printLength(Box b);  // friend function
};

void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b(10);
    printLength(b);  // Accessing private member
    return 0;
}



//  Friend class

//A friend class in C++ is a class that is given access to the private and protected members 
//of another class. If class A is declared as a friend inside class B, then all member functions of class A can access the private and protected members of class B.

#include <iostream>
using namespace std;

class Engine {
    private:
        int horsepower;
    public:
        Engine(int hp) : horsepower(hp) {}
        friend class Car;  // Car is friend of Engine
};

class Car {
    public:
        void showEnginePower(Engine e) {
            cout << "Engine Horsepower: " << e.horsepower << endl;
        }
};

int main() {
    Engine e(500);
    Car c;
    c.showEnginePower(e);
    return 0;
}
