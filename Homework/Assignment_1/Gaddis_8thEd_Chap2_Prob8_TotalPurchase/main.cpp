/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 10, 2017, 12:15 PM
  Purpose:  Total Purchase
       
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
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float saleTotal = item1 + item2 + item3 + item4 + item5;
    
    
    //Input values
    cout << "Purchased Items:" <<endl;
    cout << "Item 1: $" <<item1<<endl;
    cout << "Item 2: $" <<item2<<endl;
    cout << "Item 3: $" <<item3<<endl;
    cout << "Item 4: $" <<item4<<endl;
    cout << "Item 5: $" <<item5<<endl;

    cout << "Total Sale Amount: $" <<saleTotal<<endl;
   
          
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}