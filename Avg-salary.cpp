Problem - https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
======================================================
class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int size = salary.size();
        sort(salary.begin(), salary.end());
        for(int i=1; i<(size-1); i++) 
            sum += salary[i];
        
        return (sum/(size-2));
    }
};
