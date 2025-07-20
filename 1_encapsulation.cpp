#include<iostream>
using namespace std;

// Encapsulation is just combining the data member and the member function in an single unit while contolling access to the data.
// it is used to make data secure from wrong feeding
class Student {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }
    // Getter for name
    string getName() {
        return name;
    }
    // Setter for age
    void setAge(int a) {
        if(a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }
    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Aman");
    s.setAge(20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;


    //encapulation prohibt from direct access to some imp data member
    //s.age=10;--error bcz age is private, 

    // Try setting invalid age
    s.setAge(-5);//error- here we are trying to feed wrong data to the storage but it will not be stored bcz 
    //the data member age  is private so we directly cant change the value , so we are using the function setAge() 
    //and this function has a conditional statement which will not let the user to input wrong data .hence the encapulation is done and the data is secured

    return 0;
}
