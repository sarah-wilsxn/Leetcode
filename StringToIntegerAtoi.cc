class Solution {
public:
    int myAtoi(string s) {
        int length = s.length();
        double ret = 0;
        int plus = 0;
        int minus = 0;
        int i = 0;
        while (s[i] == ' '){
            i++; // skip over whitespace
        } 
        if (s[i] == '+'){
            plus++;
            i++;
        } else if (s[i] == '-'){
            minus++;
            i++;
        }
        if (minus > 0 && plus > 0 && minus == plus){
            return 0;
        } 
        while (i < length && s[i] >= '0' && s[i] <= '9'){ 
            ret = ret * 10 + (s[i] - '0');
            i++;
        }
        if (minus % 2 != 0){
            ret = -ret;
        }
        if (ret > INT_MAX){
            return INT_MAX;
        } else if (ret < INT_MIN){
            return INT_MIN;
        } else {
            return ret;
        }
    }
};
