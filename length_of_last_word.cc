class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream ss{s};
        string word;
        while (ss >> word){}
        return word.size();    
    }
};
