class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }

        if(nums[0] != nums[1]){
            return nums[0];
        }

        if(nums[nums.size() - 1] != nums[nums.size() - 2]){
            return nums[nums.size() - 1];
        }
        int l=0;
        int h= nums.size()-1;
        int mid;
        while(l<h){
            mid= (l+h)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid-1]){
                h=mid-1;
            }
            else if(mid%2!=0 && nums[mid]==nums[mid-1]){
                l=mid+1;
            }
            else if(mid%2==0 && nums[mid]==nums[mid+1]){
                l=mid+1;
            }
            else{
                h=mid-1;

            }
        }
        return nums[l];
        
    }
};