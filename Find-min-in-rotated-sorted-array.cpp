Problem - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
--------------------------------------------------------------------
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), Min = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] < Min) Min = nums[i];
        } return Min; 
    }
};
