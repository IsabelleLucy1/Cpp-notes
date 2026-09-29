#include <iostream> //this header file allows us to use input and output streams, such as std::cout for printing to the console.
// main function 

// THIS FILE COVERS DATA TYPES INPUT AND OUTPUT 
//FULL UNDESTANDING OF THE IOSTREAM


using namespace std; 
// this line allows us to use standard library names without the std:: prefix


//DATA TYPES
//int: used to store interger values
//double: stores floating point numbers
//char stores single characters
//string stores textual data
//bool stores true or false values


int DataTypesExample() {
    int myInt = 42; // integer
    double myDouble = 3.14; // floating point number
    char myChar = 'A'; // single character
    std::string myString = "Hello, C++!"; // string
    bool myBool = true; // boolean value
    return 0;
}

//user input

int UserInputExample() {
    //EXAMPLE 1
    int x;
    string name;
    cout << "Enter an integer: "; //lets the user type a number
    cin >> x; //gets user inputs
    cout <<"Your number is: " << x; //displays the input value

    //EXAMPLE 2
    cout<<"Enter your name: "; 
    cin >> name;
    cout<<"Your name is: " << name;

     return 0;
}

int main(){
    std::cout << "Hello, World" << std::endl;
    
    //calculate arae of rectangle
    int length = 4;
    int width = 5;

    int area = length * width; //calculate area
    cout << "Area of rectangle: " << area << std::endl; //print area to console
    int run1 = DataTypesExample();
    int run2 = UserInputExample();
    cout<< run1, run2;
    return 0; //ends the main fucntion
}
