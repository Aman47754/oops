//syntax

// class Parent_name{
//     .......
// }
// class Child_name : (access modifiers) Parent_NAme{
//     ......
// }
// access modifiers specifies the mode of inhertance


//mode of inheritance

//   (parent class       type of inhertance            child class
     //member access 
     //modifier)

//   private--cant be accssed in any of its child calss

//   public                public                          public
//                         protected                       protected
//                         private                         private

//   protected             public                          protected
//                         protected                       protected
//                         private                         private                

// the above chart explains that- eg- if a data member or a function is protected in the parent class
//if we inhert thr parent class in the child class with access modifier public - then the data members of the
//parent class will act as protected in the child class, and similarly all other


#include<iostream>
using namespace std;

class Human{
    
    string name;//private(default)
    public:
    int age;

    protected:
    int weight;
};

class Student: public Human{
    //here the access modifier is public,so:
    //name->cannot inherit
    //age->public
    //weight->protected;
    public:
    int roll_number;
    int fee;

    void setWeight(int w){
        weight=w;//weight is accesses bcz protected can be acced in same class
        cout<<"weight of student set to "<<w<<endl;
    }
};



int main(){
    Student A;
    //A.name="Aman"//error bcz name is private in parent so cant be a member in child class;
    //A.weight=6//error bcz weight is protected in the class Student so cant be used in external code
    A.setWeight(5);//way to access the protected data member,since setWeight is Public
    A.age=20; //since are is public in Student 
    cout<<A.age<<endl;
    A.fee=20;
    cout<<A.fee;
}
//similarly all the other modes can be explained