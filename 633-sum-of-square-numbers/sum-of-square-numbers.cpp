class Solution {
public:
    int mySqrt(long long int x) {
        if(x==1 || x==0)
            return x;
        int low=1;
        long long int high=x;
        long long int mid=(low+high)/2;
        while(low<=high){
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x){
                high=mid-1;
                mid=(low+high)/2;
            }
            else if(mid*mid<x){
                low=mid+1;
                mid=(low+high)/2;
            }
        }
        return 0;
    }
    bool judgeSquareSum(int c) {
        if(c==0 || mySqrt(c)!=0){
            return true;
        }
        for(long long int i=0; i*i<=c;i++){
            long long int a=i*i;
            if(mySqrt(c-a)!=0)
                return true;
        }
        return false;
    }
};