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
int main(){
    Car myCar = {"Toyota", 2020};
    myFunction(); //calls and executes the function
    functionName("Isabelle");
    defaultFunction();
    defaultFunction("Spain");
    multipleFunction("Johm" ,20);
    myReturning(10);
    myReturning2(5, 2);

    return 0;
}
