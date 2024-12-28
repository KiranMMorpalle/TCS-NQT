#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int primeNum(int num){
    int cnt=0;
    for(int i=1; i<=sqrt(num); i++){
        if(num%i==0){
            cnt++;
            if(num%(num/i)==0 && i!=(num/i))
                cnt++; 
        }
    }
    if(cnt==2) return 1;
    else return 0;
}
void primeInRange(int start, int end){
    for(int i=start; i<=end; i++){
        if(primeNum(i))
            cout<<i<<" ";
    }
}
int main(){
    primeInRange(10,30);
    return 0;
}