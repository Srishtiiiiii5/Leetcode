class Solution {
public:
    int dp[101][101];
    bool isValid(int i, int j, int n){
        return (i >= 0 && i < n && j >= 0 && j < n);
    }

    int helper(int i, int j, int n, vector<vector<int>>& mat){
        if(!isValid(i, j, n))
            return 1e8;
        if(i == n - 1)
            return mat[i][j];
        if(dp[i][j] != INT_MAX)
            return dp[i][j];
        int mini = INT_MAX;
        mini = min(mini, mat[i][j] + helper(i + 1, j, n, mat));
        mini = min(mini, mat[i][j] + helper(i + 1, j - 1, n, mat));
        mini = min(mini, mat[i][j] + helper(i + 1, j + 1, n, mat));
        return dp[i][j] = mini;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size(), min_sum = INT_MAX;
        for(int i = 0 ; i < 101 ; i++){
            for(int j = 0 ; j < 101 ; j++)
                dp[i][j] = INT_MAX;
        }
        for(int j = 0 ; j < n ; j++)
            min_sum = min(min_sum, helper(0, j, n, matrix));
        return min_sum;
    }
};