#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int num){
    int n=num, sum=0;

    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<sumOfDigit(12345);
    return 0;
}