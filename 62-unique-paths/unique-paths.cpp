class Solution {
public:
    int solve(int i, int j, vector<vector<int>>&dp){
        if (i==0 && j==0){
            return 1;
        }
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!= -1){
            return dp[i][j];
        }
        int left = solve(i-1,j, dp);
        int right = solve(i,j-1, dp);
        return dp[i][j] = left+right; 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m, vector<int>(n,-1));
        return solve(m-1,n-1, dp);
    }
    // int solve(int i, int j){
    //     if (i==0 && j==0){
    //         return 1;
    //     }
    //     if(i<0 || j<0){
    //         return 0;
    //     }
    //     return solve(i-1,j)+ solve(i,j-1);
    // }
    // int uniquePaths(int m, int n) {
    //     return solve(m-1,n-1);
    // }
};