#include <iostream>
using namespace std;

//Arithemtic Operators

int main(){
    int x = 4,y = 5;

    //Addition is +
    //Subtraction -
    //multiplication *
    //Division is / this return the integer part of the division
    //Modulus this returns the remiainder
    //Incrementing ++
    //Decrement --

    //examples
    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 (integer division)
    cout << (x % y) << "\n"; // 1

    int z = 5;
    ++z;
    cout << z << "\n"; // 6
    --z;
    cout << z << "\n"; // 5
    return 0;
}