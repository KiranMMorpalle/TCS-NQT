#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void primeNum(int num){
    int cnt=0;
    for(int i=1; i<=sqrt(num); i++)
    {
        if(num%i==0){
            cnt++;
            if(num%(num/i)==0 && i!=(num/i))
                cnt++; 
        }
    }
    if(cnt==2)
        cout<<num<<" : Is Prime";
    else 
        cout<<num<<" : Is NOT Prime";

}
int main(){
    primeNum(30);
    return 0;
}