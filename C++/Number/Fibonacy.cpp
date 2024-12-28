// Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fiboUptoNth(int num){
    int first=0, sec=1, next=0;
    for(int j=1; j<=num; j++){
        if(j==1){
            cout<<first<<" ";
            continue;
        }  
        if(j==2){
            cout<<sec<<" ";
            continue;
        }
        next=first+sec;
        cout<<next<<" ";
        
        first=sec;
        sec=next;
    }
}
int main(){
   
    fiboUptoNth(10);

    return 0;
}
