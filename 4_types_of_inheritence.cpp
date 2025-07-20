#include<iostream>
using namespace std;

//    ***********simple inheritance***********


// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};
int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Own method

    return 0;
}




//  ***************MultiLevel Inheritance********


// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Further derived class (inherits from Dog)
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // Inherited from Animal
    p.bark();  // Inherited from Dog
    p.weep();  // Own method

    return 0;
}



//****************Multiple inheritance***********


// First base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Second base class
class Pet {
public:
    void play() {
        cout << "Pet is playing." << endl;
    }
};

// Derived class inherits from both Animal and Pet
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // From Animal
    d.play();  // From Pet
    d.bark();  // Own method

    return 0;
}




// **************** Hierarchical inheritance******


// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Own method

    Cat c;
    c.eat();   // Inherited from Animal
    c.meow();  // Own method

    return 0;
}



// *********Hybrid inheritance*****


// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// First derived class (single inheritance)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Second base class
class Pet {
public:
    void play() {
        cout << "Pet is playing." << endl;
    }
};

// Derived class with multiple inheritance (hybrid: multilevel + multiple)
class Puppy : public Dog, public Pet {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // From Animal (via Dog)
    p.bark();  // From Dog
    p.play();  // From Pet
    p.weep();  // Own method

    return 0;
}
