class Solution {
public:
    bool solve(int index, int target, vector<int>&nums, vector<vector<int>>&dp){

        if(target==0){
            return true;
        }
        if(index==0){
            return (nums[0]==target);
        }
        if(dp[index][target]!= -1){
            return dp[index][target];
        }
        bool notTake= solve(index-1, target, nums, dp);
        bool take= false;
        if(nums[index] <= target){
            take= solve(index-1, target- nums[index], nums,dp);  //agar element target se badha hai toh kyu l;ena?
        }
        return dp[index][target]= take|notTake;

    }
    bool canPartition(vector<int>& nums) {

        int m= nums.size();
        int sum=0;
        for(int i=0; i<nums.size(); i++) sum=sum+nums[i];

        vector<vector<int>>dp(m+1,vector<int>(sum+1,-1));
        if(sum%2)return false;

        return solve(m-1, sum/2, nums, dp);

    }
};