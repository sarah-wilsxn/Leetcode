class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> myvector;
        if (x < 0 || (x != 0 && x % 10 == 0)){ // negative or ends with zero 
        // since a number can't start with 0
            return false;
        } else if (x / 10 == 0){ // single digit
            return true;
        } else {
            int tempx = x;
            int count = 0;
            while (tempx > 0){
                count++;
                tempx /= 10;
            }
            while (x > 0){
                myvector.emplace_back(x % 10);
                x /= 10;
            }
            int beg = 0;
            int end = myvector.size() - 1;
            while (beg < end){
                if (myvector[beg] != myvector[end]){
                    return false;
                }
                beg++;
                end--;
            }
            return true;
        }
    }
};
