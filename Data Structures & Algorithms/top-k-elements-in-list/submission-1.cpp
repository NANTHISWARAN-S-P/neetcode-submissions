class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> arr(mp.begin(), mp.end());

        sort(arr.begin(), arr.end(), [](const auto& a, const auto&b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
