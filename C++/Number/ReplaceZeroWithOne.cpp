#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int replaceZeroWithOne(int num){
    int n=num, mul=1, ans=0;
    while(n!=0){
        int digit=n%10;
        if(digit==0)
            digit=1;
        ans=digit*mul+ans;
        mul=mul*10;
        n=n/10;
    }
    return ans;
}
//------------------------------------------------------------
int replaceZeroWithOne1(int num){
    int n=num, mul=1;
    while(n!=0){
        int digit=n%10;   
        if(digit==0)
            num=num+mul*5;
        mul=mul*10;
        n=n/10;
    }
    return num;
}
int main(){
    //cout<<replaceZeroWithOne(2009);
    cout<<replaceZeroWithOne1(2009);

    return 0;
}