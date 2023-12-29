Problem - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
=================================================================================
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ptr1 = 0;
        int ptr2 = numbers.size() - 1;
        vector<int> ans(2);
      
        while(ptr1 < ptr2) {
            if((numbers[ptr1] + numbers[ptr2]) == target) {
                ans = {ptr1+1, ptr2+1};
                break;
            } 
            else if((numbers[ptr1] + numbers[ptr2]) > target)  ptr2--;
            else  ptr1++;
        }
        return ans;
    }
};
