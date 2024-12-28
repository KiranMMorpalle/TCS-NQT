//Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfN(int num){
    int sum=0;
    for(int j=1; j<=num; j++){
        sum=sum+j;
    }
    //return sum;

    //return ((num+(num*num))/2);
}
int main(){
    cout<<sumOfN(10)<<endl;
    cout<<sumOfN(100)<<endl;
    cout<<sumOfN(5);

    return 0;
}