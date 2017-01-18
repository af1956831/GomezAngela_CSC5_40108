/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 12, 2017, 12:30 PM
  Purpose: Word Game
       
 */

//System Libraries
#include <iostream>
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
    string Name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string petsName;
    
    
    //User Prompts
    
    cout << "What is your name: ";
    cin >> Name;
    cout << "How old are you? ";
    cin >> age;
    cout << "Enter the name of a city: ";
    cin >> city;
    cout << "Enter the name of a college: ";
    cin >> college;
    cout << "Enter a profession: ";
    cin >> profession;
    cout << "Name an animal: ";
    cin >> animal;
    cout << "Tell me a name of your pet: ";
    cin >> petsName;
    
    //Output
    
    cout << "There once was a person named " << Name << endl;
    cout << "who lived in " << city << endl;
    cout << ". At the age of " << age  << Name << endl;
 
    cout << "went to "  << college << Name << endl;

    cout << " graduated and went to work as an  " << profession << endl;
    cout << ". Then, " << Name << endl;
    cout << "adopted a " << animal << endl;
    cout << "named " << petsName << endl;
    cout << ". They both lived happily ever after!" << endl;
            
   

    
    
 
    
    
    
    
    
  
    //Exit stage right!
    return 0;
}