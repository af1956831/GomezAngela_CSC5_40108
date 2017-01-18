
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 15, 2017,  9:25 PM
  Purpose: Freezing and boiling points
       
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    
double temperature;

    //Prompts

cout << "Enter a temperature in Farenheit: " << endl;
cin >> temperature;

cout << "Substances that will freeze: " << endl;

if(temperature <= -173)
    
cout << "Ethyl Alcohol" << endl;

if(temperature <= -38)
    
cout << "Mercury" << endl;

if(temperature <= -362)
    
cout << "Oxygen" << endl;

if(temperature <= 32)
    
cout << "Water" << endl;

cout << "Substances that will boil: " << endl;

if(temperature >= 172)
cout << "Ethyl Alcohol" << endl;

if(temperature >= 676)
cout << "Mercury" << endl;

if(temperature >= -306)
cout << "Oxygen" << endl;

if(temperature >= 212)
cout << "Water" << endl;


    
    
    
   
  
    
 
    

    
 
    
    
    
    
     
    
  
    //Exit stage right!
    return 0;
}