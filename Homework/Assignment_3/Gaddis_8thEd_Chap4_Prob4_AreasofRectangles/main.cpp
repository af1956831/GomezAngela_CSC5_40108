
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 15, 2017,  8:40 PM
  Purpose: Areas Of Rectangles
       
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
    
    int length, width, area;
    int length2, width2, area2;
    area = length * width;
    area2 = length2 * width2;        
    //Prompts
    
    cout << "What is the length of the first rectangle? " << endl;
    cin >> length;
    cout << "What is the width of the first rectangle? " << endl;
    cin >> width;
    
    cout << "What is the length of the second rectangle? " << endl;
    cin >> length2;
    cout << "What is the width of the second rectangle? " << endl;
    cin >> width2;
    
    if ( area > area2)
        cout << "The first rectangle has a bigger area." << endl;
    else
        cout << "The second rectangle has a bigger area." << endl;
    
    
    
  
  
    
   
  
    
    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}