class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty() || target > nums[nums.size() - 1] || target < nums[0]){
            return {-1, -1};
        } else if (nums.size() == 1){
            if (target == nums[0]){
                return {0, 0};
            } else {
                return {-1, -1};
            }
        } else {
            int l = 0;
            int r = nums.size();
            int m;
            while (l <= r){
                m = (l + r) / 2;
                if (target > nums[m]){
                    l = m + 1;
                } else if (target < nums[m]){
                    r = m - 1;
                } else {
                    break;
                }
            }
            if (target != nums[m]){
                return {-1, -1};
            }
            int start = m;
            int end = m;
            while (start >= 0 && nums[start] == target){
                start--;
            }
            while (end < nums.size() && nums[end] == target){
                end++;
            }
            return {start + 1, end - 1};
        }
    }
};
