#include<bits/stdc++.h>
using namespace std;

class Isomorphic {
public:
    bool isomorphicString(string s, string t) {
        // Arrays to store the last seen positions of characters in s and t
        int m1[256] = {0}, m2[256] = {0}; 
        
        // Length of the string
        int n = s.size(); 
        
        // Iterate through each character in the strings
        for (int i = 0; i < n; ++i) {
            // If the last seen positions of the current characters don't match, return false
            if (m1[s[i]] != m2[t[i]]) return false;
            
            // Update the last seen positions
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        
        // If all characters match, return true
        return true;
    }
};

// Main method for testing
int main() {
    Isomorphic isomorphic;
    string s = "egp";
    string t = "add";
    if (isomorphic.isomorphicString(s, t)) {
        cout << "Strings are isomorphic." << endl;
    } else {
        cout << "Strings are not isomorphic." << endl;
    }
    return 0;
}
