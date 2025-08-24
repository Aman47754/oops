//An abstract class in C++ is a class that cannot be instantiated directly and is designed to be
// a base class for other classes. It contains at least one pure virtual function (a function declared with = 0).

//Key Points:
//-Abstract classes are used to provide a common interface for derived classes.
//-You cannot create objects of an abstract class.
//-Derived classes must implement all pure virtual functions to become concrete (instantiable).

#include<iostream>
using namespace std;
class Shape{//Abstract class
    public:
    virtual void draw()=0;//pure virtual function
};

class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};

int main(){
    Circle * c= new Circle();
    c->draw();
    return 0;
}