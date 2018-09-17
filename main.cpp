/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jose Diaz
 *
 * Created on September 17, 2018, 1:18 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int base_number = 0;
    int new_base = 0;
    int new_number = 0;
    
    cout << "Enter the base 10 number you would like to convert: ";
    cin >> base_10_number;
    cout << "Enter the base you would like to convert to: ";
    cin >> new_base;
    
    do
    {
        new_number = base_10_number/new_base;
        
    }while((base_number/new_base)>base_number);

    return 0;
}

