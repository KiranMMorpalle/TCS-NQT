#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int armsNum(int num){
    int digit=log10(num)+1;
    int n=num, sum=0;

    while(n!=0){
        sum=sum+pow((n%10),digit);
        n=n/10;
    }
    return sum;

}
int main(){
    cout<<armsNum(123);
    return 0;
}