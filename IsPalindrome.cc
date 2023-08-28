// wildly inefficient but I enjoy stacks

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
        else (ans.length() == 2 && ans[0] == ans[1]) ? true : false;
        int n = ans.length();
        stack<char> s1, s2;
        if (n % 2 == 0){ // even
            for (int i = 0; i < n / 2; i++){
                s1.push(ans[i]);
            }
            for (int i = n - 1; i >= n / 2; i--){
                s2.push(ans[i]);
            }
        } else {
            for (int i = 0; i < n / 2; i++){
                s1.push(ans[i]);
            }
            for (int i = n - 1; i > n / 2; i--){
                s2.push(ans[i]);
            }
        }
        while (!s1.empty()){
            if (s1.top() != s2.top()) return false;
            s1.pop(); 
            s2.pop();
        }
        return true;
    }
};
