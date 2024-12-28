#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findMaxMinDigit(int num){
    int n=num, max=0, min=(num%10);
    while(n!=0){
        if((n%10)>=max)
            max=n%10;
        
        if((n%10)<=min)
            min=n%10;
        n=n/10;
    }
    cout<<"Num : "<<num<<endl;
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min<<endl;
}
int main(){
    findMaxMinDigit(18045);
    return 0;
}

// Num : 18945
// Max : 9
// Min : 1

// Num : 18045
// Max : 8
// Min : 0