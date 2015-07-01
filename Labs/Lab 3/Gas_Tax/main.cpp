/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 23, 2015, 11:42 PM
 * Purpose: Gas Tax
 */

//System Libraries
#include <iostream>  //File I/O
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fedtax;     //Federal tax on gasoline
    float calEtax;    //California Ex Tax on gasoline
    float calStax;    //California Sales tax on gasoline 
    float ppg;        //ppg = Price per Gallon of gasoline at purchase
    float ttp;        //ttp = total tax paid for each gallon of gasoline 
    float pctgtax;    //pctgtax = percentage of tax paid for each gallon of gasoline
    float rbsp;       //rbsp = real base price of gasoline
    
    //Input Values Here
    fedtax=0.18;
    calEtax=0.38;
    calStax=0.08;
    ppg=3.69;
    
    //Calculations
    rbsp=(ppg-fedtax-calEtax)/1.08;                     
    ttp=(fedtax+calEtax+(ppg-fedtax-calEtax-rbsp))*100; 
    pctgtax=(ttp/100)/ppg;                              
    
    //Output Unknowns Here
    cout<<"The total tax paid = "<<ttp<<" cents per gallon of gasoline"<<endl;
    cout<<"The percentage of tax per gallon = "<<pctgtax*100<<'%'<<endl;
   
    //Exit Stage Right!
    return 0;
}