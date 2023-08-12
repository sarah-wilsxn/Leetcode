class Solution {
public:
    vector<int> update(vector<int> &digits, int i){
        while (i >= 0){
        if (digits[i] == 9){
            digits[i] = 0;
            i--;
        } else {
            digits[i] += 1;
            break;
        }
        }
        if (digits[0] == 0){
            digits[0] = 1;
            digits.emplace_back(0);
        }
        return digits;
    }

    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size() - 1] != 9){
            digits[digits.size() - 1] += 1;
            return digits;
        } else {
            if (digits.size() == 1){
                digits[0] = 1;
                digits.emplace_back(0);
                return digits;
            } else {
                return update(digits, digits.size() - 1);
            }
        }
    }
};
