class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3);
        for(int num:nums){
            count[num]++;
        }

        int i=0;
        for(int j=0; j<3; j++){
            while(count[j]--){
                nums[i++] = j;
            }
        }
        
    }
};