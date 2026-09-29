#include <iostream>
#include <string> //This includes the string library
using namespace std;

int main() {
    string greeting = "Hello"; //this is how to define a string using the library
    cout << greeting;
    

    //Auto this detects the type of variable based on what its assigned
    auto x= 5;//this variable is automatically treated as int
    //only works when a value is assigned to it as the same time

    //this is how you can add strings together
    //called concatenation
    string name ="Isabelle";
    string lastName ="Connor";
    cout << name + lastName;
    //You can also appened a string together too
    string fullname = name.append(lastName);

    //In the string library you can length() function
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length(); 
    //this returns the length of string

    //HOW TO ACCESS CHARACTERS IN A STRING
    //You can use the [] like an array to access a character
    string myString ="isabelle";
    cout << myString[3]; //this will output b
    // we can use this technique to edit characters in a string


    return 0;
}   


