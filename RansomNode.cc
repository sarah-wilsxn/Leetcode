class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote == magazine) return true;
        if (ransomNote.length() > magazine.length()) return false;
        unordered_map<char,int> myMap;
        for(auto x: magazine){
            myMap[x]++;
        }
        for(auto x: ransomNote){
            if (myMap[x] > 0){
                myMap[x]--;
            } else return false;
        }
        return true;
    }
};
