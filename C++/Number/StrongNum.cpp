#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorialNum(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int strongNumber(int num){
    int n=num, sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+factorialNum(digit);
        n=n/10;
    }
    if(sum==num) 
        cout<<num<<" : Is Strong Number";
    else 
        cout<<num<<" : Is NOT Strong Number";
}
int main(){
    strongNumber(145);
    return 0;
}