

/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 16, 2017,  1:30 PM
  Purpose: Change for a dollar game
       
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
       
    double pennies;
    double nickels;
    double dimes;
    double quarters;
    double total;
  
    
   
  
    
    //Prompts
    
    cout << "Change for a Dollar Game" << endl;
    cout << "Enter the number of pennies: " << endl;
    cin >> pennies;
    cout << "Enter the number of nickels: " << endl;
    cin >> nickels;
    cout << "Enter the number of dimes: " << endl;
    cin >> dimes;
    cout << "Enter the number of quarters: " << endl;
    cin >> quarters;
    
    total = (pennies*0.01) + (nickels*0.05) + (dimes*0.10) + (quarters*0.25);
    
    if(total == 1.00)
        cout << "Congratulations, You Win!!! You entered exactly one dollar!" << endl;
    else
    
        if(total < 1.00 && total > 0)
        {
            cout << "You entered less than one dollar. Try again later!!" << endl;
        }
        if(total > 1.00)
        {
            cout << "You entered more than one dollar. Try again later!!" << endl;
        }
        else
        {
            cout << "The number of coins have to be greater than 0!! Try again!" << endl;
        }
        
    
    

    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}