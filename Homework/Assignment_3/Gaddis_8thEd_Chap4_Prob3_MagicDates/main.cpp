
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 15, 2017,  6:35 PM
  Purpose: Magic Dates
       
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
    
    int day;
    int month;
    int year;
  
    
   
  
    
    //Prompts
    
    cout << "Enter the year: " << endl;
    cin >> year;
    cout << "Enter the day: " << endl;
    cin >> day;
    cout << "Enter the month: " << endl;
    cin >> month;
    
    if(month*day==year)
    {    
    cout << "Its a magic date!" << year << endl;
    }
    else
    {
        cout << "Its not a magic date!" << endl;
    }
    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}