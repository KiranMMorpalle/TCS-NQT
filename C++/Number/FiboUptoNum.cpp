// Write a Program to Display Fibonacci Series upto
// certain number n (n is entered by user)
// Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fiboUptoNum(int num){
    int f=0, s=1, j=1, next=0;
    while(next<=num)
    {
        if(j==1){
            cout<<0<<" ";
            j++;
            continue;
        }
        if(j==2){
            cout<<1<<" ";
            j++;
            continue;
        }
        next=f+s;
        if(next<=num)
            cout<<next<<" ";
        f=s;
        s=next;
        j++;
    }
    
}
int main(){
    fiboUptoNum(100);
    return 0;
}