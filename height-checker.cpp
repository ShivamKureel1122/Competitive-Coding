Problem: https://leetcode.com/problems/height-checker/
=======================================================
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> expected(heights);
        int indices = 0;
        sort(expected.begin(), expected.end());
      
        for(int i=0; i<heights.size(); i++){
            if(expected[i] != heights[i]) 
            indices++;
        }
        return indices;
    }
};
