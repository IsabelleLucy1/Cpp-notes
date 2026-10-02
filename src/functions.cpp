#include <iostream>
using namespace std;

struct Car {
  string brand;
  int year;
};
//---------------FUNCTIONS----------------------------------
//a void function does not have a return value
//myFunction is the name which we will use to call teh function
void myFunction(){
    //code to be excuted
    cout << "This is code being executed" << endl;
}

//-----------------PARAMETERS---------------------------------
//Parameter act as varaibles that you wanna use inside the function
void functionName(string fname){
    //you need to decalare the variables that are parameters
    cout << fname <<endl;
}
//It is important to excute the functions before the main function
//this is the built in function which we used to run the main code

//We can also give functions a default value if there is nothing in the varaible
void defaultFunction(string country = "france"){
    cout << country << endl;
}
//We can have functions with multiple parameters
void multipleFunction(string fname, int age){
    cout <<fname << "Refsnes" << age <<" years old. ";
}

//-------------RETURNING FUNCTIONS-------------------------
//when we use int this indicates that a function should return a value
int myReturning (int x){
    return 5 + x;
}
int myReturning2(int x, int y){
    return x + y;
}
//we can also store the results of the function in a varaible
//You can also pass by reference 
//this is when we used normal variables when we passed paramters to a function
void changeValue(int &num) {
  num = 50;
}

//Function to swap numbers by reference
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
//We can also pass a string by reference
void modifyStr(string &str) {
  str += " World!";
}

//You can also pass an array through a function
void myArray(int myNumbers[5]){
    for(int i =0; i <5; i++){
        cout << myNumbers[i] <<endl;
    }
}
//Structure through a function
void myFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

//You should use references in functions if you want to change the structrures data
//or to avaoid copying large structures

//-----------FUNCTIONS OVERLOADING-------------------------
//this is when a function allows multiple functionms to have teh same name as long as their parameters are different
//in type or numbwr
//this lets you use the same function for similar tasks

//this is useful when you dont know the data type that could be entered into the function
//two functions for the same task
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

//------------SCOPES-------------------------------------------------------
 //inside the function these are local variables that only exists inside the function
 //if you try to use this outside this will cause an error
 //A GLOBAL variable belongs to the global scope
 //if you create a variable outside the function it can be used inside and outside the function


 //When variables are reassigned in a local function the value globally stays the same outside the function


 //----------------------RECURSION------------------------------------
 //Recursion is when a function calls istelf
 //this technique is used to break co,mplicated problems down


 //EXAMPLE
 int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}//this function can be used to add a range of numbers factorial
//EXAMPLE 2 
//Countown function
void countdown(int n) {
  if (n > 0) {
    cout << n << " ";
    countdown(n - 1);
  }
}

//-----------------------LAMBDA FUNCTIONS------------------------------------------
//A lambda function is a small anoymous function you can write directly in your code
//its useful for quick functions wuthout naming and declaring it

//You can also use a pass a lambda function as an argument
#include <functional>
//function that takes another function as a paramter
void myVoid(function<void()> func){
    func();
    func();
}

int main(){
    Car myCar = {"Toyota", 2020};
    myFunction(); //calls and executes the function
    functionName("Isabelle");
    defaultFunction();
    defaultFunction("Spain");
    multipleFunction("Johm" ,20);
    myReturning(10);
    myReturning2(5, 2);
//the captures can be used for loops [i]
//You can use the brackets to give lambda to acess to variables outside of it
    //lambda functionm example
    auto message = []( ){
        cout <<"Hello World"<< endl;
    };
    //can also be used with paramaters just like a regular function
    auto add = [](int a, int b){
        return a + b;
    };

    cout << add(3,4); //outputs 7
    message();
    return 0;
}
