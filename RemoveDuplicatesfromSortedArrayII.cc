class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 3) return nums.size();
        int curr = 0;
        for (auto x : nums){
            if (curr == 0 || curr == 1) curr++;
            else if (nums[curr-2] != x){
                nums[curr] = x;
                curr++;
            } // if it equals curr, don't ++ curr
        }
        return curr;
    }
};
