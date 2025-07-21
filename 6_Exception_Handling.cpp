// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// errors/issues . Exception occurs during the running of the program

// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.

#include<iostream>
using namespace std;

// class Customer{

//     string name;
//     int balance,accountNo;

//     public:
//     Customer(string name,int balance,int accountNo){
//         this->name=name;
//         this->balance=balance;
//         this->accountNo=accountNo;
//     };

//     void deposit(int val){
//         if(val>0){
//             balance+=val;
//             cout<<val<<"rs is deposited"<<endl;
//         }
//         else{
//             throw "deposit maoney is not valid";
//         }

//     }
//     void withdraw(int val){
//         if(val>0 && val<=balance){
//             balance-=val;
//             cout<<val<<"rs is withdrawn"<<endl;
//         }
//         else if(val<=0){
//             throw "amount should be greater than 0";
//         }
//         else{
//             throw "insufficient balance";
//         }
//     }

// };
// int main(){
//     Customer C1("rahul",100,10);
//     try
//     {
//         C1.withdraw(20);
//         C1.deposit(10);
//         C1.withdraw(200);
//     }
//     catch(const char *e)
//     {
//         cout<<"exception occured :"<<e<<endl;
//     }
    
// }





//*****Example 2 */


int main() {
    int* arr = nullptr;
    try {
        // Try to allocate a large amount of memory
        arr = new int[100000000000]; // May throw bad_alloc
        cout << "Memory allocation successful!" << endl;
        delete[] arr;
    }
    catch (const exception & e) {
        cout << "Exception occurred: " << e.what() << endl;
    }
    return 0;
}