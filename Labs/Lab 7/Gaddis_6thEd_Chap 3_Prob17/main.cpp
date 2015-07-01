/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 1, 2015, 11:02 AM
 * Purpose: Monthly Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables;
    unsigned short lnamnt=10000;  //Loan amount in US dollars ($)
    float intrt=0.01f;            //Interest rate per month
    unsigned char nMonths=36;     //Number of months to pay off loan
    float mPaymnt;                //Monthly payment in US dollars ($)
    float temp=1.0f;              //Intermediate value found in Monthly payment equation
    float cstLoan;                //Cost of the loan in US dollars ($)
    float totCost;                //Total paid back to lender
    
    //Calculate the intermediate value
    float onePlsi=(1+intrt);
    for(int months=1;months<=nMonths;months++){
        temp*=onePlsi;
    }
    
    //Calculate
    mPaymnt=intrt*temp*lnamnt/(temp-1);
    mPaymnt=static_cast<int>(mPaymnt*100)/100.0f; //Exact amount in pennies
    totCost=nMonths*mPaymnt;
    cstLoan=totCost-lnamnt;
            
    //Output Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:         $"<<setw(8)<<lnamnt*1.0f<<endl;
    cout<<"Monthly Interest Rate:"<<setw(8)<<intrt*100<<'%'<<endl;
    cout<<"Number of Payments:   "<<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"Monthly Payment:     $"<<setw(8)<<mPaymnt<<endl;
    cout<<"Amount Paid Back:    $"<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:       $"<<setw(8)<<cstLoan<<endl;
  
    //Exit Stage Right!
    return 0;
}

