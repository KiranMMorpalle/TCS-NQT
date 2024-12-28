#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int perfectNum(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){     //i<=num-1....(num/2)....Invalid: sqrt(num)
        if(num%i==0)
            sum+=i;
    }
    if(sum==num) cout<<num<<" : Is Perfect number.";
    else cout<<num<<" : Is NOT Perfect number.";
}

int perfectNumber(int n){
    int sum=0;
    for(int i=1; i*i<=n; i++){
       if(n%i==0)
       {
            // if(i*i==n || i==1)
            //     sum+=i;
            // if((n/i==0)&&(n/i!=n))
            //     sum=sum+i+(n/i);

            

        // if (i * i == n || i == 1)
        // sum = sum + i;
        // else sum = sum + i + n / i;
       }
    }
    if(sum==n) cout<<n<<" : Is Perfect number.";
    else cout<<n<<" : Is NOT Perfect number.";
}
int main(){
    // perfectNum(6);
    perfectNumber(6);
    return 0;
}