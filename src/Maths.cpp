#include <iostream>
#include <cmath> //Maths library lets us use maths functions
using namespace std;

int main(){

    //------------MIN AND MAX---------------------------------
    cout << max(5, 10); //finds the highest value of x and y
    cout << min(5, 10); // finds the smallest value of x and y 

    //------------MATHS FUNCTIONS----------------
    cout << sqrt(64); //Square root
    cout << round(2.6); // rounds a number to nearest decimal place
    cout << log(2); // log function

    //------------IF STATEMENTS-------------------------
    /*Less than: a < b
    Less than or equal to: a <= b
    Greater than: a > b
    Greater than or equal to: a >= b
    Equal to: a == b
    Not equal to: a != b
    */

    if (20 > 18){
        cout << "20 is greater than 18";
        //if the condition is true it will output the message
        //you can use boolean as well 
    }

    //Else statement
    int time = 20;

    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    // Outputs "Good evening."   
    
    //else if statement 
    //this lets us check a new condition to test if the first condition is false
    if (time < 12){
        cout <<"Good morning.";
    } else if (time < 18){
        cout << "Good day.";
    } else {
        cout <<"Good evening";
    }
    // Outputs good day

    int x = 15;
    int y = 25;

    //NESTED IF STATEMENTS
    if (x > 10) {
        cout << "x is greater than 10";
        if (y > 20) {
            cout << "y is also greater than 20";
        }
    }

    return 0;
}
