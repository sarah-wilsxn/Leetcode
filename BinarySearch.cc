class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()){
            return 0;
        } else if (target > nums[nums.size() - 1]){
            return -1;
        } else if (target == nums[nums.size() - 1]){
            return nums.size() - 1;
        }
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int m = (l + r) / 2;
            if (target == nums[m]){
                return m;
            } else if (target > nums[m]){
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return -1;
    }
};
