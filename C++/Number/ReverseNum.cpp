#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseNum(int num){
    int n=num,rev=0, len;
    while(n!=0){
        //len=log10(num)+1;    //Count digits in number
        rev=rev*10+(n%10);
        n=n/10;
    }
    cout<<"Original : "<<num<<endl;
    cout<<"Reverse : "<<rev;

}
int main(){
    reverseNum(1369);
    return 0;
}