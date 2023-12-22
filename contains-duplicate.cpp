Problem - https://leetcode.com/problems/contains-duplicate/
============================================================
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int index = 0;
        for(int i=index+1; i<nums.size(); i++) {
            if(nums[index] != nums[i]) index++;
            else return true;
        }
        if(index+1 == nums.size()) return false;
        else return true;
    }
};
