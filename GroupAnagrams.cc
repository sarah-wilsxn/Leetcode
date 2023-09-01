class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (auto str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(str);
        }
        vector<vector<string>> ret;
        for (auto x : groups) {
            ret.push_back(x.second);
        }
        return ret;
    }
};
