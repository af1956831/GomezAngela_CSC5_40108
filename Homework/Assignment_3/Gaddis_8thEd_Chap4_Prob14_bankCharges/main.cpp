
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 14, 2017,  3:15 PM
  Purpose: Bank Charges
       
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
    
    int balance;
    int cw;
    int fee1;
    int fee2;
    int totalFee;

  
    
   
  
    
    //Prompts
    
    cout << "Enter the beginning balance: " << endl;
    cin >> balance;
    cout << "Enter the number of checks written: " << endl;
    cin >> cw;
    
    if(balance < 400)
    {
        fee1 = 15;
    }
    else
    {
        fee1 = 0;
    }
    if(cw<=20)
    {
        fee2 = (10*cw);
    }
    else if (cw>39 && cw<=39)
    {
        fee2 = (8*cw);
    }
    else if (cw>39 && cw<=59)
    {
        fee2 = (6*cw);
    }
    else if (cw >=60)
    { fee2 + (5*cw);
    }
    totalFee = fee1 + fee2;
    cout << "Your total fee is: " << totalFee << endl;
    cout << "Your check fee is: " << fee2 << endl;
    
   

    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}