/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 8, 2015, 10:45 AM
 * Purpose: Retirement Calculator 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate ->see Calif Muni Bonds
    float savReq;       //Savings required a retirement 
    float pDep=0.20f;   //Of your gross salary ->Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial savings at start of employment
    float year=0;       //Start at year 0
    
    //Calculate Required savings
    savReq=salary/invRate;
    
    //Loop to calculate when retirement is possible
    do{
        deposit=pDep*salary; //Deposit based on salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

