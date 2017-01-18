/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 13, 2017,  3:43 PM
  Purpose: Miles Per Gallon
       
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
    
    int miles;
    int gallons;
    double MPG;
    
  
    
    //Process by mapping inputs to outputs
    
    cout << "Enter the number of miles driven: " << endl;
    cin >> miles;
    cout << "Enter how many gallons the gas tank holds: " << endl;
    cin >> gallons;
    MPG = static_cast<double>(miles) / gallons;
    
 
    //Output values
    
    cout << "MPG: " << MPG << endl;
    
  
    //Exit stage right!
    return 0;
}