class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
