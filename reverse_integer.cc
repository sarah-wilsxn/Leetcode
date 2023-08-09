class Solution {
public:
    int reverse(int x) {
        if (x / 10 == 0){
            return x;
        } else if (x % 10 == 0){
            return reverse(x / 10);
        } else {
            long rev = 0;
            int tempx = abs(x);
            while (tempx > 0){
                if (rev > INT_MAX / 10 || rev < INT_MIN / 10){
                    return 0;
                }
                rev = rev * 10 + tempx % 10;
                tempx /= 10;
            }
            if (x > 0){
                return rev;
            } else {
                return -rev;
            }
        } 
    }
};
