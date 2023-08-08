class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if (nums.empty()){
            return 0;
        }
        int j = 0;
        for (int i = 1; i < length; i++){
            if (nums[i] != nums[i - 1]){
                nums[j + 1] = nums[i];
                j++;
            } 
        }
        return j + 1;
    }
};
