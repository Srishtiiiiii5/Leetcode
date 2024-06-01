class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        if(s.size()==1){
            return s[0];
        }
        for(int i=1; i<s.size(); i++){
            score=score+ abs (s[i]-s[i-1]);
        }
        return score;
    }
};