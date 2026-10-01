#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    //An array is used to store multiple values in a single variable
    //we declare one like this
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    //they must all be the same data type
    //we access them like this
    cout <<cars[0]; //Outputs volvo

    //Loop through an array
    for (int i =0; i <5; i++){
        cout << cars[i] << "\n"; }

    //an alternative way is using the for each loop
    for (string car : cars){
        cout << car << "\n";
    } //this loops through the strings

    //------------Vectors------------------------------------------------------
    //these are resizeable arrays essentially dynamic
    //where arrays are fixed after allocation
    //here is an example
    vector<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda"};
    //to get the size of the array we use sizeof()
    int myNumbers[5] = {10,20,30,40,50};
    cout << sizeof(myNumbers) << endl;
    //it outputs 20 instead of 5 because it returns it in bytes 
    //To find out how many elements an array has, you have to divide the size of the array 
    //by the size of the first element in the array:
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;
    // we can use this formula to loop through an array using the length

    //------------------MULTI DIMENSIONAL ARRAYS--------------------------------------------
    string letters[2][4] = {//2 x 4 arrays
        //row and columns
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };
    //example of how you access the values
    cout << letters[0][2];  // Outputs "C"
    //we can also edit the values in the array
    letters[0][0] = "Z";
    cout << letters[0][0] << endl;
    //output Z instead of A

    //to loop through you need one for loop for each dimsension
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
        cout << letters[i][j] << "\n";
        }
    }



















    return 0;
}