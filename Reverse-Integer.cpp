Problem: https://leetcode.com/problems/reverse-integer/description/
=====================================================
class Solution {
public:
    int reverse(long long int x) {
        long long int a, b, reverseNum = 0;
        if(x>0) b = x;
        else if(x<0) b = -x;
        while(b > 0) {
            a = b%10;
            reverseNum = reverseNum*10+a;
            b = b/10;
        }
	if(x < 0)  x = -reverseNum;
	else  x = reverseNum;
        long long int left, right;
        left = -pow(2,31);
        right = (pow(2,31)-1);
        if((x >= left) && (x <= right))  return x;
        else  return 0;
    }
};
