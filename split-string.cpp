Problem - https://leetcode.com/problems/split-a-string-in-balanced-strings/
====================================================
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0, max = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'R') balance++;
            else balance--;
            if(balance == 0) max++;
        }
        return max;
    }
};
