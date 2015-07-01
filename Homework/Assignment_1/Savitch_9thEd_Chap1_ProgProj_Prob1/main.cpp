/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 28, 2015, 2:57 PM
 * Purpose: Inputing two integers and getting their sum and product 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short a;
    unsigned short b;
    unsigned short c;
    unsigned short d;
    
    //Input Values Here
    a=22;
    b=15;
    
    //Process Input Here
    c=a+b;
    d=a*b;
    
    //Output Unknowns Here
    cout<<a<<"+"<<b<<" = "<<c<<endl;
    cout<<a<<"*"<<b<<" = "<<d<<endl;
    
    //Exit Stage Right!
    cout<<"This is the end of the program.\n";
    return 0;
}

