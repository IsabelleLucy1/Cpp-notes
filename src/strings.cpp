#include <iostream>
#include <string> //This includes the string library
using namespace std;

int main() {
    string greeting = "Hello"; //this is how to define a string using the library
    cout << greeting;
    
//--------------------------AUTO------------------------------------
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


//----------------USING LENGTH and ACCESS------------------------------
    //In the string library you can length() function
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length(); 
    //this returns the length of string
    //HOW TO ACCESS CHARACTERS IN A STRING
    //You can use the [] like an array to access a character


    string myString ="isabelle";
    cout << myString[3]; //this will output b
    // we can use this technique to edit characters in a string


    //to type special characters such a quotes 
    string txt2 = "We are the so-called \"Vikings\" from the north.";
    //we can use \n for a new line
    //\t to create a tab

    //----------INPUT STRINGS-------------------------------
    int number;
    cout<<"Type a number";
    cin >> number;//we use cin to get the user input from the keyboard

    //Another method we can use is getline()
    //We use this when we want the program to read the whole line of text
    string nameExample;
    cout<<"Enter your full name";
    getline(cin, nameExample);
    //this takes the whole name and stores it in the variable


    //---------------C-STYLE-STRINGS----------------------------------
    char greeting2[]= "hello";
    //this stores the string as an array of characters
    return 0;
}   


