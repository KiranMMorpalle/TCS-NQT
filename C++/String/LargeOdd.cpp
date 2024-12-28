#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largeOdd(string n){
    int num=stoi(n), oddNum=0;
    int len=log10(num)+1;
    while(len>0){
        num=stoi(n);
        while(num>0){
            int p=pow(10,len);
            //int k=num%p;
            if((num%p)%2==1 && (num%p)>oddNum)
                oddNum=(num%p);
            num/=10;
        }
        len--;
    }
    return oddNum;
}

int main(){
    cout<<largeOdd("5347");
    //cout<<largeOdd(214638);
    // string s="05347";
    // cout<<stoi(s);

    return 0;
}