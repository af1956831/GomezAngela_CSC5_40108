/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 13, 2017, 12:15 PM
  Purpose:  How many calories
       
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
    
    //Input values
    float cookiesAte;
    float totalCalories;
  
    
    //Process by mapping inputs to outputs
    cout << "A bag of cookies has a total of" << endl;
    cout << " 30 cookies in it." << endl; 
    cout << "10 servings equal to 300 calories." << endl;
    cout << "How many cookies have you eaten?" << endl;
    
    
    
    
     
    
    //Output values
    cin >> cookiesAte ;
        totalCalories = cookiesAte * 30;
    cout << "Your total calories for the amount of cookies you ate is "
         << totalCalories << ".";
    //Exit stage right!
    return 0;
}