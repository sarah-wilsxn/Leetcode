class Solution {
public:
int step1(int n){
    int sum = 0; 
    while (n > 0){
        int temp = n;
        n /= 10;
        sum += (temp % 10) * (temp % 10); 
    }
    return sum;
}
    bool isHappy(int n) {
        if (n == 1) return true;
        int loop = 9;
        unordered_set<int> s;
        while (loop != 0){
            n = step1(n);
            if (s.count(n)) break;
            s.insert(n);
            loop--;
        }
        return n == 1;
    }
};
