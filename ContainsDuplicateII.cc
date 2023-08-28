class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() == 1) return false;
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if (m.count(nums[i])){
                if(abs(i - m[nums[i]]) <= k)
                    return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};
