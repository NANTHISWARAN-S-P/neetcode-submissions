class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        for(int n:nums){
            if(n == val) continue;
            arr.push_back(n);
        }
        for(int i=0; i<arr.size(); i++){
            nums[i] = arr[i];
        }
        return arr.size();
    }
};