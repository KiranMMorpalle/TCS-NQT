/* Print sequence of numbers starting with n, 
without using a loop. Replace n with n - 5, n−5... until n≤0. 
Then, replace n with n+5, n + 5, n+5 until n regains its initial value. 
Complete the function pattern(n) which takes n as input and returns a list containing the pattern.
-----------------------------------------------
Input: n = 16
Output: 16 11 6 1 -4 1 6 11 16
Explanation: The value decreases until it is greater than 0. 
             After that it increases and stops when it becomes 16 again.
-------------------------------------------------
Input: n = 10
Output: 10 5 0 5 10
-------------------------------------------------
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std; 
void number(vector<int>& v,int num,int m, int k)
{
    v.push_back(num);
    if(num==m && k!=0)
        return;

    if(num>0 && k==0)
        num=num-5;
    else{
        num=num+5;
        k=1;
    }
    number(v,num,m,k);
}
//-----------
vector<int> pattern(int N)
{
    vector<int> v;
    if(N<=0){
        v.push_back(N);
        return v;
    } 
    number(v,N,N,0);
}
//----------
int main(){
    vector<int> v=pattern(17);  
    for(auto i : v)
        cout<<i<<" ";  

    return 0;
}