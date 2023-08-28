class Solution {
public:
    bool helper(string s, string t) {
        unordered_map<char, char> m;
        for (int i = 0; i < s.length(); i++) {
            if (m[s[i]] && m[s[i]] != t[i]) return false;
            m[s[i]] = t[i];
        }
        return true;
    }

    bool isIsomorphic(string s, string t) {
        return (helper(s, t) && helper(t, s));
    }
};
