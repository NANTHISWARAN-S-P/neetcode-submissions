class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        while(true){
            int num = nums[rand() % n];
            int count = 0;
            for(int n:nums){
                if(n == num) count++;
            }
            if(count>n/2){
                return num;
            }
        }
        return 0;
    }
};