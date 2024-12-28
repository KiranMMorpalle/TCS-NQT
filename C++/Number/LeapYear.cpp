// Write a Program to Check whether a year entered by user is Leap Year or not

// A year is a leap year if “any one of ” the following conditions are satisfied: 
// The year is multiple of 400.
// The year is a multiple of 4 and not a multiple of 100.
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void isLeapYear(int year){
    if ((year%400==0) || (year%4==0 && year%100!=0))
    {
        cout<<year<<" : is leap year.";
    }
    else
        cout<<year<<" : is NOT leap year.";
}
int main(){
    isLeapYear(2024);
    return 0;
}
// if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return true; // It's a leap year
//     } else {
//         return false; // It's not a leap year
//     }