class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        } else if (strs.size() == 1){
            return strs[0];
        }
        string ret = ""; // empty if no prefix, base case
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++){
            if (first[i] != last[i]){
                return ret;
            } else {
                ret += first[i];
            }
        }
        return ret;
    }
};
