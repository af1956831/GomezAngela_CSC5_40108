
/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 13, 2017,  5:30 PM
  Purpose: Ingredient Adjuster
       
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
    
    double cupsOfSugarPer48Cookies = 1.5;
    double cupsOfButterPer48Cookies = 1;
    double cupsOfFlourPer48Cookies = 2.75;
    int batchOfCookies = 48;
    int numberOfCookies;
    
    int cupsOfSugar;
    int cupsOfButter;
    int cupsOfFlour;
    
    cupsOfSugar = (numberOfCookies / batchOfCookies) * cupsOfSugarPer48Cookies;
    cupsOfButter = (numberOfCookies / batchOfCookies) * cupsOfButterPer48Cookies;
    cupsOfFlour = (numberOfCookies / batchOfCookies) * cupsOfFlourPer48Cookies;
    
    //Input values
   
    cout << "Please enter number of cookies: " << endl;
    cin >> numberOfCookies;
    cout << "For " << numberOfCookies << endl; 
    cout << "cookies, you will need " << cupsOfSugar << endl;
    cout << "cups of sugar, "<< cupsOfButter << endl;
    cout << "cups of butter, and " << cupsOfFlour << endl;
 
    
    
    
    
     
    
    //Output values
  
    //Exit stage right!
    return 0;
}