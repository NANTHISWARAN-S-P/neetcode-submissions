class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans =0, max_num =0;
        for(int num:nums){
            mp[num]++;
            if(mp[num] > max_num){
                ans = num;
                max_num = mp[num];
            }
        }
        return ans;

    }
};