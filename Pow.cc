class Solution {
public:
    double powhelper(double x, long long n) {
        if (x == 0){
            return 0;
        } else if (x == 1){
            return 1; 
        } else if (x == -1){
            if (n % 2 == 0){
                return 1;
            } else {
                return -1;
            }
        } else if (n == 0){
            return 1;
        } else if (n == 1){
            return x;
        }
        double temp = powhelper(x, n / 2);
        if (n % 2 == 0) {
            return temp * temp;
        } else {
            if (n > 0) {
                return x * temp * temp;
            } else {
                return (temp * temp) / x;
            }
        }
    }

    double myPow(double x, int n) {
        long long absn = abs(n);
        double result = powhelper(x, absn);
        if (n < 0) {
            result = 1 / result;
        }
        return result;
    }
};
