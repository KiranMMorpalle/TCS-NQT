#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    //int len=sizeof(arr)/sizeof(int);
    int len=n;
    for(int i=0; i<(len/2); i++){
        // int tmp=arr[i];
        // arr[i]=arr[len-1-i];
        // arr[len-1-i]=tmp;

        swap(arr[i],arr[len-1-i]);
    }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=8;
    int arr[]={1,2,3,4,5,6,7,8};
    reverseArray(arr,n);

    return 0;
}