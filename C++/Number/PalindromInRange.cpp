#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int palindromNum(int num){
    int n=num,rev=0, len;
    while(n!=0){
        //len=log10(num)+1;    //Count digits in number
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(num==rev)
        return 1;
    else
        return 0;
}

void palindromInRange(int start, int end){
    for(int i=start; i<=end; i++){
        if(palindromNum(i))
            cout<<i<<" ";
    }
}
int main(){
    cout<<"palindrom In Range 101-150 : \n";
    palindromInRange(101,150);
    return 0;
}