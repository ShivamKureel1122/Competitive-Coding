Problem - https://leetcode.com/problems/distribute-candies-to-people/description/
======================================================================
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i = 0, candy = 1;
        while(candies > 0) {
            ans[i++] += candy;
            candies -= candy++;
            if(i == num_people) i = 0;
            if(candy > candies) candy = candies;
        } 
        return ans;
    } 
};
