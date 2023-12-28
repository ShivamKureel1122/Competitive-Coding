   Problem - https://leetcode.com/problems/check-if-it-is-a-straight-line/description/
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int length = coordinates.size();
        if(length == 2) return true;
        if((coordinates[1][0] - coordinates[0][0]) == 0) {
            for (int i = 2; i < coordinates.size(); i++) {
                if (coordinates[i][0] != coordinates[0][0])
                    return false;
            }
        } else {
            double slope = static_cast <double> (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]) ;
            for(int i=1; i < length-1; i++) {
                if((coordinates[i+1][0] - coordinates[i][0]) == 0) 
                return false;
                else {
                    double x = static_cast <double> (coordinates[i+1][1] - coordinates[i][1]) / (coordinates[i+1][0] - coordinates[i][0]) ;
                    if(slope != x) 
                    return false; 
                } 
            }
        }
        return true;
    }
};
