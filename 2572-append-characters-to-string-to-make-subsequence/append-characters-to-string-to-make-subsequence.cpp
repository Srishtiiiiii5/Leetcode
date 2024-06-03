class Solution {
public:
    int appendCharacters(string s, string t) {
        int index=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]==t[index]){
                index++;
            }
        }

        
        if (t.size() > index){
            return t.size()-index;
        }
        else{
            return index-t.size();
                    }
    }
};