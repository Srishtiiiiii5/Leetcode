class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int i,j;
        j=0;
        for(i=0;i<heights.size(); i++)
            v.push_back(heights[i]);
        sort(v.begin(), v.end());
        for(i=0; i<v.size(); i++){
            if(v[i]!=heights[i])
                j=j+1;
        }
        return j;
    }
};