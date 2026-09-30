#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    //----------CASE STATEMENTS------------------
    //The switch expression is used to comapre values with each case 
    //if there is a match the code is executed
    //the break and default are optional but it will break out of the switch block
    //this saves execution time as it ignores the other possible mathes

    //example

    int day = 4;
    switch (day) {
    case 6:
        cout << "Today is Saturday";
        break;
     case 7:
        cout << "Today is Sunday";
        break;
    default: //the default is used when no code matches the case
        cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend"

    //--------------WHILE LOOPS--------------------
    int i =0;
    while (i <5){//loops through block of code as long as condition is true
        cout << i << "\n";
        i++; //this loop will run 5 times
    }
    
    //--------------DO WHILE --------------------------
    //this loop will excute the code block once then check the condition is true
    //this loop will always be executed once even if the condition is false
    //EXAMPLE
    int a = 0;
    do {
    cout << a << "\n";
    a++;
    }
    while (a < 5);

    //----------------FOR LOOPS--------------------------
    //We use a for loops when we know how many times it should loop thrpugh
    for (int i = 0; i < 5; i++) { 
        //statement 1 sets the variable before the loop
        //statement 2 defines the condition for the loop to run
        //statement 3 is what is excuted every time after the code block has been executed
        cout << i << "\n";
        //prints 0 to 4

        //-----------FOR EACH LOOPS----------------------------

        //a for each loop is used to loop through the elements in an array or data structure
        //syntax is for (type variablename : array Name)
        //EXAMPLE
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
     cout << num << "\n";
    }
    
    //the same can be applied to a string 
    string stringFor = "hello";
    for (char c : stringFor){
        cout << c << "\n";

    }
    //----------------BREAKS and CONTINUE------------------------------------
    //the break statement can be used to jump out of a loop
    //EXAMPLE
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
    }//this jumps out the loop when i == 4

    //the continue statement breaks one iteration if a specifcied condition occurs and continues after
    //EXAMPLE
    //In this example it skips 4
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }           
    
    return 0;
}
}
