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



//----------------CONSTRUCTORS-------------------------
class Car {
    public:
        string brand;
        string model;
        int year;

        Car() {//without paramters
            //this one has default values
            //other has custom values
            brand = "unkown";
            model = "unknown";
            year = 0;
        }
        //constructors can also take paramaeters which can be useful for setting values
        //sets multiple values at once
        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

//USING ACCESS SPECIFIERS
//the public keyword means it can be accessed and modified outside the code
//by default members are made private

class accessExample{
    public://anyone can use it
        int x;
    private://cannot be accessed from outside the class
        int y;
    protected://members cannot be accessed from outside the class
    //but can be inherited class and accessed.
        int z;

};

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
    //EXAMPLE OF CONSTRUCTOR USE

    Car carObj3("BMW", "X5", 1999);
    cout << carObj3.brand << endl;
    cout << carObj3.model << endl;
    cout << carObj3.year << endl;
//We can define cpnstructors outside of a class using the ::
//but is must be declared in the class function

    return 0;
}
