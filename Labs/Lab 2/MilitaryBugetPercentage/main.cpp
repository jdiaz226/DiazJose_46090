/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 24, 2015, 6:47 AM
 * Purpose: Excessive Military Budget
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
    float fedbgt; //fedbgt = US federal budget as of 2015
    float milbgt; //milbgt = US military budget as of 2015
    float pmilbgt;//pmilbgt = military budget as a percentage of the federal budget
    //Input Values Here
    fedbgt=3.8e12f;
    milbgt=6.06e11f;
    //Process Input Here
    pmilbgt=milbgt/fedbgt*100;
    //Output Unknowns Here
    cout<<"The military budget as a percentage of the federal budget =  "<<pmilbgt<<"%"<<endl;        
    //Exit Stage Right!
    return 0;
}

