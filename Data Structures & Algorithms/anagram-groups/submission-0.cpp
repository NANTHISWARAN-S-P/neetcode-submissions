class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string s:strs){
            string sort_s = s;
            sort(sort_s.begin(), sort_s.end());
            mp[sort_s].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& p:mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
