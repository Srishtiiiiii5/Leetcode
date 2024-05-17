class Solution {
public:
    int calculate(string s, int &i) {
        int n = s.size(); 
        int num = 0;
        int result = 0;
        int sign = 1; 
        while (i < n) {
            char c = s[i++]; 
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '+' || c == '-') {
                result += num * sign;
                num = 0;
                sign = (c == '+') ? 1 : -1;
            } else if (c == '(') { 
                int nestedResult = calculate(s, i);
                result += nestedResult * sign;
            } else if (c == ')') {
                result += num * sign;
                return result;
            }
        } 
        result += num * sign; 
        return result;
    } 
    int calculate(string s) {
        int i = 0;
        return calculate(s, i);
    }
};