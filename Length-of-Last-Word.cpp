Problem - https://leetcode.com/problems/length-of-last-word/
============================================================
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int lastWordLength = 0;
        for(int i = (length-1); i >= 0; i--) {
            if(s[i] != ' ') {
                while(i >= 0 && s[i] != ' ') {
                    lastWordLength++; 
                    i--;
                } break;
            }
        } 
        return lastWordLength;
    }
};
