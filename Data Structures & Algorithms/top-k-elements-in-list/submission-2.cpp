class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > hp;

        for(auto& p:mp){
            hp.push({p.second, p.first});
            if(hp.size() > k){
                hp.pop();
            }
        }

        vector<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(hp.top().second);
            hp.pop();
        }

        return ans;
    }
};
