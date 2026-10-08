//This is notes on classes
#include <iostream>
using namespace std;

//A class defines what an object should look like
//and an object is created based on that class
// a class is a user defined data type that we can use in our program

//creating a class
class Myclass { // the class
public: // the access specifier

    void myMethod() { // method defined inside the class
        cout << "Hello world!" << endl;
    }

    int myNum; // attribute
    std::string mystring; // attribute

    //---------------METHODS----------------------------
    // Methods are functions that belong to a class
    // they can be defined inside or outside the class
};

// In large programs you may want to define the method later
// We use the :: to specify the scope of the function
//void Myclass::myMethod()//define it like nornaml
int main() {
    //------------------CREATING OBJECTS-----------------------
    Myclass myObj;
    // accessing the attribute and setting values
    myObj.myNum = 15;
    myObj.mystring = "some text";
    // printing attributes
    std::cout << myObj.myNum << std::endl;
    std::cout << myObj.mystring << std::endl;

    //-----------------MULTIPLE OBJECTS------------------------
    // if we give the object a different name we can assign the class multiple objects
    Myclass myObj2;
    myObj2.myNum = 20;
    myObj2.mystring = "Text again";
    std::cout << myObj2.myNum << std::endl;
    std::cout << myObj2.mystring << std::endl;

    return 0;
}
