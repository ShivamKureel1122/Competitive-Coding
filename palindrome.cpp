Problem: https://leetcode.com/problems/palindrome-number/
==============================================================
class Solution {
public:
    bool isPalindrome(long int x) {
        long int a, b = x, reverseNum = 0;
        bool isPalindrome = true, isNotPalindrome = false;
        if(x < 0)  return isNotPalindrome;
      
        while(b != 0) {
            a = b % 10;
            reverseNum = reverseNum * 10 + a;
            b = b / 10;
        }
      
        if(x == reverseNum)  return isPalindrome;
        else  return isNotPalindrome;
    }
};
