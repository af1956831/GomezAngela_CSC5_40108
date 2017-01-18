

/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 16, 2017,  9:00 PM
  Purpose: Fat Gram Calculator
       
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
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
    
     double calories; 
     double fatgrams; 
     double fatcalories;
     double lowfat;

    //Prompts
     
cout << "Enter the number of calories in food: " << endl;
cin >> calories;
if(calories < 0)
{
cout << "Calories cannot be less than 0!" << endl;
cout << "Enter calories again: " << endl;
}

cout << "Enter the number of fat grams in food: " << endl;
cin >> fatgrams;
if(fatgrams < 0 || fatgrams > calories)
{
cout << "Fatgrams cannot be less than 0 or greater than calories" << endl;
cout << "Enter fatgrams again: " << endl;
}

fatcalories = fatgrams * 9;
lowfat = fatcalories/calories;


cout << "Calories from fat: " << lowfat * 100 << endl;

if(lowfat < 0.30)
cout << "This food is low in fat." << endl;


    
    
    
   
  
    
 
    

    
 
    
    
    
    
     
    
  
    //Exit stage right!
    return 0;
}