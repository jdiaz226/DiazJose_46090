/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 8, 2015, 10:45 AM
 * Purpose: Retirement Calculator 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void heading(float, float, float);
void retirement(float, float, float,float, float, int, float);
void table(int, string, float, float, float);

//execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary;        //Average Salary in $'s
    float invRate;       //Investment Rate ->see Calif Muni Bonds
    float savReq;        //Savings required a retirement 
    float pDep;          //Of your gross salary ->Percentage Deposited 
    float deposit;       //Yearly deposit in $'s
    float savings;       //Initial savings at start of employment
    string date="06/01/";//Initial date 
    float year=0;        //Start at year 0
    int grdYr=18;        //Initial year 
    
    
    //Input salary, investment rate, and yearly deposit
    cout<<"Enter yearly salary"<<endl;
    cin>>salary;
    cout<<endl;
    cout<<"Enter investment rate"<<endl;
    cin>>invRate;
    cout<<endl;
    cout<<"Enter yearly deposit"<<endl;
    cin>>pDep;
    cout<<endl;
     
    heading(salary, invRate, pDep);
    
    do{
        retirement(deposit,pDep,salary,invRate,savings,year,savReq);
    }while(savings<savReq);
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}
void heading(float salary, float invRate, float pDep){
    cout<<"Yearly salary   = $"<<salary<<endl;
    cout<<"Investment Rate = "<<invRate<<'%'<<endl;
    cout<<"Yearly Deposit  = "<<pDep<<'%'<<endl;
}
void retirement(float deposit, float pDep, float salary,float invRate, float savings, int year, float savReq){
    //Calculate Required savings
    savReq=salary/invRate;//Loop to calculate when retirement is possible
    
    do{
        deposit=pDep*salary; //Deposit based on salary
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
}
void table(int year, string date, float savings, float i, float d){
}

