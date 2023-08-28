class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 1) return true;
        string ans;
        for (char c : s) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                ans += (c >= 'A' && c <= 'Z') ? (c + 32) : c;
            }
        }
        if (ans.length() == 1) return true;
        int start = 0;
        int end = ans.length() - 1;
        while (start <= end){
            if (ans[start] != ans[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
