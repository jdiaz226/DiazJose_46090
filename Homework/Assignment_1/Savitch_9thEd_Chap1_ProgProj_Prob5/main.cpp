/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 23, 2015, 11:42 PM
 * Purpose: Display "C" composed of inputed letter
 */

//System Libraries
#include <iostream>  //File I/O
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char a;
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Select letter from keyboard"<<endl;
    cin>>a;
    
    cout<<endl;
    cout<<setw(3)<<a<<setw(2)<<a<<setw(2)<<a<<endl;
    cout<<setw(2)<<a<<setw(5)<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<setw(2)<<a<<setw(5)<<a<<endl;
    cout<<setw(3)<<a<<setw(2)<<a<<setw(2)<<a          <<endl;
           
    //Exit Stage Right!
    return 0;
}