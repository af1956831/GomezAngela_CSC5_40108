

/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 16, 2017,  8:15 PM
  Purpose: Book Club Points
       
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
    
    int books;
    int points;
    
    
    
    //Prompts
    
    cout << "Enter the number of books purchased this month: " << endl;
    cin >> books;
    
    if(books == 0)
    {
        points = 0;
        cout << "You have earned points: " << points << endl;
    }
    if(books == 1)
    {
        points = 5;
        cout << "You have earned points: " << points << endl;
    }
    if(books == 2)
    {
        points = 15;
        cout << "You have earned points: " << points << endl;
    }
    if(books == 3)
    {
        points = 30;
        cout << "You have earned points: " << points << endl;
    }
    if(books >= 4)
    {
        points = 60;
        cout << "You have earned points: " << points << endl;
    }
    else
    {
        if(books < 0)
            cout << "Number of books cannot be negative!" << endl;
    }
    
    
    
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}