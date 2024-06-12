class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0;
        int o=0;
        int t=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                o++;
            }
            else{
                t++;
            }
        }
        int i=0;
        while(z){
            nums[i]=0;
            i++;
            z--;
        }
        while(o){
            nums[i]=1;
            i++;
            o--;
        }
        while(t){
            nums[i]=2;
            i++;
            t--;
        }

    }
};