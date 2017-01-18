
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 14, 2017, 12:15 PM
  Purpose: Angle Calculator
       
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

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
    
    double a, b, c, d;
    
    //Input values
    
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;
    d = cos(pow(a, 4.0) + pow(b, 4.0) + pow(c, 4.0));
    cout << "The length of the angle is: ";
    cout << setprecision(4) << d << endl;
   
  

 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}