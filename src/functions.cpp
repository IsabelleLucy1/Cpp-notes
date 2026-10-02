#include <iostream>
using namespace std;

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

int main(){
    myFunction(); //calls and executes the function
    functionName("Isabelle");
    defaultFunction();
    defaultFunction("Spain");
    multipleFunction("Johm" ,20);

    return 0;
}
