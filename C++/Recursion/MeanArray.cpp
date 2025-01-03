//To find the mean of the elements of the array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
float findMean(int A[], int N, int sum, int i) { 
    if(i == N) 
        return float(sum) / N; 

    sum += A[i]; 
    return findMean(A, N, sum, i+1); 
} 
//------------------------------------
// Main Calling Function 
int main() 
{ 
    int A[] = {1, 2, 3, 4, 5}; 
    int N = 5; 
    cout << findMean(A, N, 0, 0); 
    return 0; 
}