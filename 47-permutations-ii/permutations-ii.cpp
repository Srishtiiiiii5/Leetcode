class Solution {
public:
void solve(vector<int>nums, vector<vector<int>>&ans, int index){
        if(index>=nums.size()){
            if(find(ans.begin(), ans.end(), nums)!= ans.end()){return;}
            ans.push_back(nums);
            return;
        }

        for(int j=index; j<nums.size();j++){
            swap(nums[j], nums[index]);
            solve(nums,ans,index+1);
            swap(nums[j], nums[index]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums, ans, index);

        return ans;
    }
};