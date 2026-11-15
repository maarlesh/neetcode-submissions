#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& x : s) {
            x = tolower(x);
        }
        int start = 0;
        int end = s.length() - 1;
        while(start < end){
             if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if(s[start] != s[end]){
                cout<<"Start: "<<s[start] << "   End: "<<s[end];
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
