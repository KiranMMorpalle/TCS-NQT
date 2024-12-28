#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void primeRange(int start, int end)
{
    while(start<=end)
    {
        int cnt=0;
        for(int j=1; j<=start; j++)
        {
            if(start%j==0)
            {
                cnt++;
                //break;
                // if(start%(start/j)==0 && j!=(start/j))
                //     cnt++;
            }
        }
        if(cnt==2)
            cout<<start<<" ";
        
        start++;
    }
}
int main(){
    primeRange(1,20);
    return 0;
}