class Solution {
public:
    
    int dp[20];

    int solve(int n) {
        if(n <= 1) return 1;
        if(dp[n]) return dp[n];
        int ans = 0;
        for(int i=1; i <= n; i++) {
            ans += solve(i-1) * solve(n-i);
        }
        return dp[n] = ans;
    }

    int numTrees(int n) {
        memset(dp, 0, sizeof(dp));
        int ans = solve(n);
        return ans;
    }
};

//with tle
//makes sense with recursion
//if(n<=1)return 1
//i=0 se i<=n tak loop
//recursion se ans+=numstrees(n-1)* numstress(n-i)