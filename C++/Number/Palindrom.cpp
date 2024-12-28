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
        cout<<num<<" : Is Palindrom";
    else
        cout<<num<<" : Is Not Palindrom";

}
int main(){
    palindromNum(1441);
    return 0;
}