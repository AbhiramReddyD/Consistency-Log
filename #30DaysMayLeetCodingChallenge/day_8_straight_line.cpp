class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       int a = coordinates[1][1] - coordinates[0][1];
        int b = coordinates[1][0] - coordinates[0][0];
        for(int i = 2; i < coordinates.size(); i ++){
            int y = coordinates[i][1] - coordinates[0][1];
            int x = coordinates[i][0] - coordinates[0][0];
            if(y * b != x * a) return false;
        }
        return true; 
    }
};