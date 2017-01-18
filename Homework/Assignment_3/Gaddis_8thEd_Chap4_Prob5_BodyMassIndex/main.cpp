
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 16, 2017,  2:15 PM
  Purpose: Body Mass Index
       
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
    
    int height = 0;
    int weight = 0;
    int BMI = 0;
    
    
  
 //Prompts
    
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    cout << "Enter your weight in pounds: " << endl;
    cin >> weight;
    
    BMI = (weight * 703)/(height * height);
    
    cout << "Your BMI is: " << BMI << endl;
    cout << "How to read your BMI: " << endl;
    cout << "Below 18.5 : Underweight" << endl;
    cout << "18.5 - 24.9 : Average" << endl;
    cout << "25.0 - 29.9 : Overweight" << endl;
    cout << "30 and above : Obese" << endl;
    
    
   

    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}
