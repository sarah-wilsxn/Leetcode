class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m, m1;
        for (int i = 0; i < s.length(); i++) {
            if (m[s[i]] && m[s[i]] != t[i]) return false;
            if (m1[t[i]] && m1[t[i]] != s[i]) return false;
            m[s[i]] = t[i];
            m1[t[i]] = s[i];
        }
        return true;
    }
};
