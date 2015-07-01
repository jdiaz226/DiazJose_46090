/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 23, 2015, 11:42 PM
 * Purpose: Total Number of Cents
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
    unsigned int a; //a = value of quarters in (cents)
    unsigned int b; //b = value of dimes in (cents)
    unsigned int c; //c = value of nickels in (cents)
    unsigned int d; //d = number of quarters
    unsigned int e; //e = number of dimes
    unsigned int f; //f = number of nickels
    unsigned int g; //d = number of total cents
    
    //Input Values Here
    a=25;
    b=10;
    c=5;
   
    //Outputs and Inputs 
    cout<<"Number of quarters = "<<endl;
    cin>>d;
    cout<<"The number of dimes = "<<endl;
    cin>>e;
    cout<<"The number of nickels = "<<endl;
    cin>>f;
    g=(a*d)+(b*e)+(c*f); //Calculation for total amount of cents
    cout<<"The total number of cents = "<<g<<" cents"<<endl;
    
    //Exit Stage Right!
    return 0;
}

