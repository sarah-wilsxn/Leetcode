class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s == t){
            return true;
        } else if (s.length() != t.length()){
            return false;
        } else {
            sort(t.begin(), t.end());
            sort(s.begin(), s.end());
            if (s == t){
                return true;
            } else {
                return false;
            }
        }
    }
};
