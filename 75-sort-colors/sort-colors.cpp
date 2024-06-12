class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int s = 0, m = 0, e = nums.size()-1;
        while(m<=e){
            if(nums[m] == 0){ 
                swap(nums[s++],nums[m++]);
            }
            else if (nums[m] == 1){ 
                m++;
            }
            else{ 
                swap(nums[m],nums[e]);
                e--;
            }
        }
  
/*m se 1 ko track kar rahe hai
agar m par 0 aaya toh s se swap
m pe 1 aaya toh just increase
m pe 2 aaya toh e se swapp
*/
}
};