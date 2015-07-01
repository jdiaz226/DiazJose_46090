/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 25, 2015, 11:17 AM
 * Purpose: To show the percentages of crime in US and UK populations
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    float uspop;        //uspop   = US population 
    float ukpop;        //ukpop   = UK population 
    float uscrm;        //uscrm   = US crime cases
    float ukcrm;        //ukcrm   = UK crime cases
    float uscmpct;      //uscmpct = US crime percentage for population
    float ukcmpct;      //ukcmpct = UK crime percentage for population      
    
    //Initiative Values
    uspop=3.18e8;
    ukpop=6.4e7;
    uscrm=1.188e7;
    ukcrm=6.52e6;
    
    //Calculate
    uscmpct=uscrm/uspop*100;  //Calculate the crime percentage for the US population
    ukcmpct=ukcrm/ukpop*100;  //Calculate the crime percentage for the UK population
    
    //Output the Results
    cout<<"The percentage of crime in the US for the population = "<<fixed<<setprecision(2)<<uscmpct<<"%"<<endl;
    cout<<"The percentage of crime in the UK for the population = "<<fixed<<setprecision(2)<<ukcmpct<<"%"<<endl;
   
    //Exit Stage Right!
    return 0;
}

