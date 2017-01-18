
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 15, 2017,  12:00 PM
  Purpose: Time Calculator
       
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
    
    float m;
    float s;
    float d;
    float h;
    float y;
  
    
    //Prompts
    
  cout << "Enter the number of seconds: " << endl;
  cin >> s;
 
 if(s>=31104000)
 {
 cout << "The seconds you entered are: " << s/31104000 << endl; 
 }
 else if(s>=2592000)
 {
 cout << "The seconds you entered are: " << s/2592000 <<endl;
 }
 else if(s>=86400)
 {
 cout << "The seconds you entered are: " << s/86400 <<endl;
 }
 else if(s>=3600)
 {
 cout << "The seconds you entered are: " << s/3600 <<endl;
 }
 else if(s>=60)
 {
 cout << "The seconds you entered are: " << s/60 <<endl;
 
 }
 if(s < 60 && s > 0)
 {
 cout << "The seconds you entered = " << s <<endl;
 }
    
 

    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}