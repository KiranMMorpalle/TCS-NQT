//Write a Program to Check Whether a Character is Vowel or Consonant.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void vowelConsonent(char ch){
    if((ch>=65 && ch<=90) || (ch>=96 && ch<=122))
    {
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            cout<<"Vowels";
        else if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            cout<<"Vowels";
        else
            cout<<"Consonents";
    }
    else 
        cout<<"Not Alphabet.!";
}
int main(){
    vowelConsonent('6');
    return 0;
}