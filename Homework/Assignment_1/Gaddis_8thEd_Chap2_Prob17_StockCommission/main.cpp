/* 
  File:   main.cpp
  Author: Angela Gomez
  Created on January 10, 2017, 06:15 PM
  Purpose:  Stock Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const unsigned char PERCENT=100;//Conversion to Percent

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned char stkPrce=35;  //Units of $'s/share
    unsigned short nShares=750;//Number of Shares
    unsigned char comishn=2;   //Percent Commission
    unsigned short stkPaid,comPaid,totPaid;
    
    //Process by mapping inputs to outputs
    stkPaid=stkPrce*nShares;          //Amount Paid for the Stock Purchase $'s
    comPaid=stkPaid*comishn/PERCENT;  //Commission on Stock Purchase $'s
    totPaid=stkPaid+comPaid;          //Total Paid $'s
    
    //Output values
    cout<<"Stock Price/Share= $   "<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares =    "<<nShares<<"shares"<<endl;
    cout<<"Commission              "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid  = $  "<<comPaid<<endl;
    cout<<"Total Paid       = $"<<totPaid<<endl;

    //Exit stage right!
    return 0;
}