#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    //An array is used to store multiple values in a single variable
    //we declare one like this
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    //they must all be the same data type
    //we access them like this
    cout <<cars[0]; //Outputs volvo

    //Loop through an array
    for (int i =0; i <5; i++){
        cout << cars[i] << "\n"; }

    //an alternative way is using the for each loop
    for (string car : cars){
        cout << car << "\n";
    } //this loops through the strings

    //------------Vectors------------------------------------------------------
    //these are resizeable arrays essentially dynamic
    //where arrays are fixed after allocation
    //here is an example
    vector<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};
    //to get the size of the array we use sizeof()
    int myNumbers[5] = {10,20,30,40,50};
    cout << sizeof(myNumbers) << endl;
    //it outputs 20 instead of 5 because it returns it in bytes 
    //To find out how many elements an array has, you have to divide the size of the array 
    //by the size of the first element in the array:
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;
    // we can use this formula to loop through an array using the length

    //------------------MULTI DIMENSIONAL ARRAYS--------------------------------------------
    string letters[2][4] = {//2 x 4 arrays
        //row and columns
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    //example of how you access the values
    cout << letters[0][2];  // Outputs "C"
    //we can also edit the values in the array
    letters[0][0] = "Z";
    cout << letters[0][0] << endl;
    //output Z instead of A

    //to loop through you need one for loop for each dimsension
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
        cout << letters[i][j] << "\n";
        }
    }
    //-----------------Structures-----------------------------------------
    //structures are was to group several related variables into one place
    //each varaible is known as a member of the structure
    //unlike an array these can contain many differemnt data types

    struct{
        int myNum;
        string myString;

    } myStructure; //this is the variable that we can store them in

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    //Named Structures
    struct car {  // This structure is now named "car"
    string brand;
    string model;
    int year;
    };
    //car structure named car 1
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    //car structure  named car2
    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
 
    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 //---------------------------ENUM-------------------
 //an enum is a special type that represents a group of constant variables
    enum Level{
        LOW,
        MEDIUM,
        HIGH
    };

    //to acess we must create a variable for it
    enum Level myLevel = MEDIUM;//if you print this it will store as 1

    //You can also change the value that gets output instead of 0,1,2
    //just type LOW = 25, and it will output 25 instead
//it can also be used in a case statement 

    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
            cout << "Low Level";
            break;
        case 2:
            cout << "Medium level";
            break;
        case 3:
            cout << "High level";
            break;
    }
    //--------------------REFERENCES---------------------------------------
    // A reference is a varaible that is an alias for an existin varaible
    //it is created using the & operator
    string food ="Pizza";
    string &meal =food;
    //now food and meal both refer to the same value

    //if you change the value of the reference variable the original will also be changed
    //this is because they refer to the same location memory
    meal = "Burger";
    cout << food << endl;

    //The memory address is assigned to the variable when you use a reference value
    //to access the name of the memory address we can use the & operator
    cout << &food;

    //---------------POINTERS--------------------------------------
    // a pointer is a variable that store the memory address as its value
    string* ptr = &food; // a pointer varaible with the name ptr that stores the address
    cout << ptr << endl;

    //To dereference a pointer we use the * operator like so
    cout << *ptr << endl; //this output the value of the pointer (burger)

    //You can also edit the value of a pointer
    *ptr = "Icecream";
//this will also change the original value as well
 

 



















    return 0;
}