class Solution {
public:
    int mySqrt(int x) {
        long mid;
        if (x == 0 || x == 1){
            return x;
        } 
        long start = 1;
        long end = x;
        while (start <= end){
            mid = start + (end - start) / 2;
            if (mid * mid == x){
                return mid;
            } else if (mid * mid < x){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return start - 1;
    }
};
