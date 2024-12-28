//Write a Program to Calculate factorial of Numbers. 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factOfN(int num){
    int sum=1;
    for(int j=1; j<=num; j++){
        sum=sum*j;
    }
    return sum;
}
int main(){
   
    cout<<factOfN(5);

    return 0;
}