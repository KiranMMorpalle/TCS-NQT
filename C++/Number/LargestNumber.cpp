// Write a Program to Find Largest Number Among Three Numbers entered by users
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largeNum(int num1,int num2,int num3){
    if(num1>num2 && num1>num3)
        return num1;
    else if(num2>num1 && num2>num3)
        return num2;
    else
        return num3;
}

int main()
{
    cout<<largeNum(190,63,577);
    return 0;
}

