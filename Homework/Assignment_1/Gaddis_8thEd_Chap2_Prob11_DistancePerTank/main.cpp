/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 10, 2017, 05:15 PM
  Purpose:  Distance per Tank of Gas
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
    //Declare and Initialize Variables
    const double gasTankSize = 20.0;
    const double townMPG = 23.5;
    const double highwayMPG = 28.9;
    double distanceDriven;
    distanceDriven = gasTankSize * townMPG;

    
    //Process by mapping inputs to outputs
    cout << "On one tank of gas the car can travel " <<distanceDriven<< 
            " miles when driven in town."<<endl;
    cout <<endl;
    distanceDriven = gasTankSize * highwayMPG;
    cout << "On one tank of gas the car can travel " <<distanceDriven<< 
            " miles when driven on the highway."<< endl;
    
    //Output values
  

    //Exit stage right!
    return 0;
}