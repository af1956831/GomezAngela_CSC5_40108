/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 13, 2017, 2:15 PM
  Purpose: Test Average
       
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double test1, test2, test3, test4, test5;
    double average;
   
    
    //Input values
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    cout << "Enter the fourth test score: ";
    cin >> test4;
    cout << "Enter the fifth test score: ";
    cin >> test5;
  
    
    // Calculate the average of the scores.
    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    
    //Display the average
    cout << "The average score is: " << average << endl;
    
    //Exit stage right!
    return 0;
}