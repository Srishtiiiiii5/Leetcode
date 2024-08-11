class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int i=0,j=0;
        int k=0;
        double mid;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j])
                v.push_back(nums1[i++]);

            else if(nums1[i]>nums2[j])
                v.push_back(nums2[j++]);

            else{
                v.push_back(nums1[i++]);
                v.push_back(nums2[j++]);



            }
        }
        for(;i<nums1.size();i++)
            v.push_back(nums1[i]);

        for(;j<nums2.size();j++)
            v.push_back(nums2[j]);

        if(v.size()%2==0){
            int s=v.size();
            mid= (v[s/2] + v[(s-1)/2] );
            mid=mid/2;
        }
        else
            mid=v[v.size()/2];
        return mid;
    }
};