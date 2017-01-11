/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 9, 2017, 8:00 PM
  Purpose:  Miles Per Gallon
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
    int miles = 375, 
        gallons = 15;
    int MPG = miles/gallons;
    
    
    cout << "MPG: " << MPG <<endl;


    //Exit stage right!
    return 0;
}