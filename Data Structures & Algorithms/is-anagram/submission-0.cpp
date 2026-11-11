class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        unordered_map<char,int>mp2;
        for(char c:t){
            mp2[c]++;
        }
        return mp == mp2;
    }
};
