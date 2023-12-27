Problem - https://leetcode.com/problems/reverse-words-in-a-string-iii/
=======================================================
class Solution {
public:
    stack <char> Stack;
    string result;
    void remove() {
        while(!Stack.empty()) {
            result += Stack.top();
            Stack.pop();
        }
    }
    string reverseWords(string s) {    
        int size = s.length();
        for(int i=0; i<size; i++) {
            if(s[i] != ' ')
            Stack.push(s[i]);
            else {
                remove();
                result += ' ';
            }
        }
        remove();
        return result;
    }
};
