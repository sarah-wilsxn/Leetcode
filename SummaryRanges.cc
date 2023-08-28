class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;
        if (nums.empty()) return ret;
        int begin, end;
        begin = nums[0];
        for (int i = 0; i < nums.size() - 1; i++) {
            long a = nums[i + 1];
            long b = nums[i]; 
            // static_cast<long>(nums[i]) won't work?
            if (a - b != 1) {
                end = nums[i];  
                if (begin != end) {
                    ret.emplace_back(to_string(begin) + "->" + to_string(end));
                } else {
                    ret.emplace_back(to_string(begin));
                } 
                begin = nums[i + 1];
            }
        }
        if (begin != nums[nums.size() - 1]) {
            ret.emplace_back(to_string(begin) + "->" + to_string(nums[nums.size() - 1]));
        } else {
            ret.emplace_back(to_string(begin));
        }
        return ret;
    }
};
