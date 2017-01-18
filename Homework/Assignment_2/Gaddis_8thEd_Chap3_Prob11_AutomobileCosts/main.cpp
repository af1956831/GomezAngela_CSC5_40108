/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 13, 2017, 12:15 PM
  Purpose: Automobile Costs
       
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    
    double loanPayment;
    double insurance;
    double gas;
    double oil;
    double tires;
    double maintenance;
    
    double monthlyTotal, annualTotal;
    
 
//User Prompts
    
    cout << "Enter your monthly car loan payment: ";
    cin >> loanPayment;
    cout << "Enter your monthly insurance: ";
    cin >> insurance;
    cout << "Enter your monthly gas expense: ";
    cin >> gas;
    cout << "Enter your monthly oil expense: ";
    cin >> oil;
    cout << "Enter your monthly tire expense: ";
    cin >> tires;
    cout << "Enter your monthly maintenance expense: ";
    cin >> maintenance;
    
    //Calculations
    
    monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
    annualTotal = monthlyTotal * 12;
    
    cout << setprecision(2) << fixed;
    
    cout << "Your total monthly expenses are: $ " << monthlyTotal << endl;
    cout << "Your annual expenses are: $ " << annualTotal << endl;
    
            
  
    //Exit stage right!
    return 0;
}