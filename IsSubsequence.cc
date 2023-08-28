class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        else if (s.size() == t.size()) return s == t;
        else if (s.size() > t.size()) return false;
        int j = 0;
        for (int i = 0; i < t.length(); i++){
            if (s[j] == t[i]){
                j++;
                if (j == s.length()) {
                    return true;
                }
            }
        }
        return false;
    }
};
