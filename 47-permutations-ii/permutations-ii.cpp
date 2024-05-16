class Solution {
public:
        void solve(vector<int>&nums,vector<int>&arr,vector<vector<int>>&ans,vector<int>&selected){
        if(arr.size()==nums.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
                if(i>0 && nums[i]==nums[i-1] && selected[i-1]==0)continue;
	            if(selected[i]==0){
	                arr.push_back(nums[i]);
	                selected[i]=1;
	                solve(nums,arr,ans,selected);
	                arr.pop_back();
	                selected[i]=0;
	            }
	    }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>selected(nums.size(),0);
		vector<vector<int>>ans;
		vector<int>arr;
        sort(nums.begin(),nums.end());
		solve(nums,arr,ans,selected);
		return ans;
    }
};