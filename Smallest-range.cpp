Problem - https://leetcode.com/problems/smallest-range-i/description/
==============================================================
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int Max = *max_element(nums.begin(), nums.end());
        int Min = *min_element(nums.begin(), nums.end());
        return max(0, (Max - Min) - 2*k); 
                     OR
        /* if((Max - Min) - 2*k < 0) return 0;
        else return ((Max - Min) - 2*k); */
    }
};
