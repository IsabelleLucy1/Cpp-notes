//This is notes on classes
#include <iostream>
using namespace std;
//file handling
#include <fstream>
//in this library there are 3 functions
//ofstream - creates and writes to files
//ifstream - reads from files
//fstream - combination of ofstream and ifstream creates, reads and write to files






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


//--------------------ENCAPSULATION-------------------------------------

//Encapsulation is to make sure sensitive data is hidden from users
//we will declare the attributes as private
//but if we want to modify the valye you can provide get and set methods

class Employee {
    private:
    //Private attribute
    int salary;

    public:
    //sets the salary
    void setSalary (int s) {
        salary = s;

    }//gets the salary
    int getSalary(){
        return salary;
    }
};

//--------------------------INHERITANCE --------------------------------------
//Inheritnace allows a class to resue attributes from another
//it helps write cleaner and more efficient code
//avoid duplication
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class VehicleCar : public Vehicle {
  public:
    string model = "Mustang";
};// class has same attributes but it also has a new one model

//we can also have multi level inheritance
//such as a grandchild which inherits attributes of the child

//------------------------POLYMORPHISM------------------------------------

//means many forms when we have many classes that are related by inheritance
//Polymorphism uses those methods to perform different tasks. This allows us to perform a single action 
//in different ways

//base class
class Animal {
    public:
        void animalSound(){
            cout << "The animal makes a sound" << endl;
    }
};

//derived class
class Pig : public Animal {
    public:
    void animalSound(){
        cout << "The pig says: wee wee " << endl;
    }
};

class Dog : public Animal{
    public: 
    void animalSound(){
        cout << "The dog says: bow bow"<< endl;
    }
};

//------------------TEMPLATES---------------------------------------
//tenplates let you write a function or class that works with different data types
//They help avoid repeating code and make programs more flexible

template <typename T>
T add ( T a, T b){
    return a + b;
}//T is a placeholder for a data type like int or a float

//it can be used on classes if you want to display any data type
template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};
//templates avoid repeating logic for different data types
//write cleaner code and support generic programming

//another example store two values of different data types
// the placeholder must be 2 different values
template <typename T1, typename T2>
class Pair {
  public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
      first = a;
      second = b;
    }

    void display() {
      cout << "First: " << first << ", Second: " << second << "\n";
    }
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


//-----------------ENCAPSULATION EXAMPLE -----------------------------
    Employee Obj;
    Obj.setSalary(50000);//assigns the value
    cout << Obj.getSalary();//prints it
    //keeps the salary private
    //It is good practice for security and control of data

//------------POLYMORPHISM EXAMPLE-----------------------------------------
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

//----------------TEMPLATES EXAMPLES---------------------------------------
    cout << add<int>(5, 3) << "\n";
    cout << add<double>(2.5, 1.5) << "\n";
//This stores a value then displays it
    Box<int> intBox(50);
    Box<string> strBox("Hello");
//you must define the dataa type for the template in <> 
    intBox.show();
    strBox.show();
//when you have template data types
// you must specifify both of them
    Pair<string, int> person("John", 30);
    Pair<int, double> score(51, 9.5);
    //this stores 2 values the data types are declared with , 
    //then displayed after
    person.display();
    score.display();


    //--------------------FILE  HANDLING EXAMPLE-----------------------------
    ofstream MyFile ("Filename.txt");
    //creates and opens the file
    //writes to the file
    MyFile << "Files can be tricky but this is fun";
    //close the file
    MyFile.close();
    // Use a while loop together with the getline() function to read the file line by line
    //while (getline (MyReadFile, myText)) {
  // Output the text from the file
    //cout << myText;



    return 0;
}
