/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 10, 2017, 10:00 PM
  Purpose:  Circuit Board Price
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
    double basePrice = 14.95;
    double sellPrice = (basePrice * 0.35) + basePrice;
   
    
   
    
    cout << "The selling price of a circuit board is: $" << sellPrice << endl <<
            endl;
  


    //Exit stage right!
    return 0;
}