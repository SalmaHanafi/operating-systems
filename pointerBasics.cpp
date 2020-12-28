#include <iostream>
using namespace std;

int main(){
    int myInt = 15;
    int * myPointer;
    myPointer = &myInt;
    cout << "Memory location of myInt: " << &myInt << endl;
    cout << "The value of myPointer: "<< myPointer;
    
    cout << "\nThe value of myInt: "<< myInt << endl;
    cout << "The value pointed to by myPointer: " << *myPointer;
    
    
    
    myInt = 10;
    cout << "\n\n--- After myInt changes to 10 ---\n\n" << endl;
    cout << "Memory location of myInt: " << &myInt << endl;
    cout << "The value of myPointer: "<< myPointer;
    
    cout << "\nThe value of myInt: "<< myInt << endl;
    cout << "The value pointed to by myPointer: " << *myPointer;
    
}