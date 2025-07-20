#include<iostream>
using namespace std;


//********HERO CLASS***** 

class hero{
    //properties
    
    int health;
    public:
    


    char name;
    // void print(){
    //     cout<<health;
    // }

    //getter
    int gethealth(){
        return health;
    }
    char getname(){
        return name;
    }

    //setter
    void sethealth(int h){
        health=h;
    }
    void setname(char c){
        name=c;
    }

    //***CONSTRUCTOR***
    
    // hero(){
    //     cout<<"constructor called"<<endl;
    //     health=50;
    // }
    // //Parameterised constructor
    // hero(char ch){
    //     cout<<"parameterised constructor called";
    //     name=ch;

    // }


    //*******THIS OPERATOR********
    // hero(int health){
    //     //health =health;  //doing this is not clear ki kon sa argument wala health and and kon sa property wala health
    //     this->health=health; //yaha first wala health properties wala ha & =health parameter hai
    //     //above sentence means current object ke health property me input parameter wal ahealth daal do;
    //     //abhi current object h3  hai;
    // }


    //COPY CONSTRUCTOR
    hero(int health,char name){
        this->health=health;
        this->name=name;
    }
};
int main(){
    //creation of object;

    //static allocation
    // hero h1;

   
    
    // // cout<<h1.health;
    // // cout<<h1.name<<endl;
    // // h1.print();
    // cout<<h1.gethealth()<<endl;
    // cout<<h1.getname()<<endl;
    // h1.sethealth(50);
    // h1.setname('a');
    // cout<<h1.ahealth()<<endl;
    // cout<<h1.getname()<<endl;


    //dynamic alocation

    // hero *h =new hero;
    // cout<<"health is "<</*(*h).gethealth()*/  /* OR*/  h->gethealth() <<endl;
    // /*(*h).sethealth(50)*/ /*OR*/ h->sethealth(50);
    // cout<<"health is "<</*(*h).gethealth()*/ /*OR*/ h->gethealth()<<endl;


    //CONSTRUCTOR

    cout<<"hii\n";
    //DEFAULT CONSTRUCTOR
    // hero hc;
    // cout<<"hero is called"<<endl;
    // cout<<hc.gethealth();

    //Prameterised constructor
    // hero hc('A');
    // cout<<endl<<hc.getname();


    //*******THIS OPERATOR********

    // hero h3(50);
    // cout<<h3.gethealth();


    //***COPY CONSTRUCTOR*****
    hero c(50,'A');
    hero suresh(c);//here copy of c is done on suresh
    
    cout<<suresh.gethealth()<<endl;
    cout<<suresh.getname();



    return 0;
}

