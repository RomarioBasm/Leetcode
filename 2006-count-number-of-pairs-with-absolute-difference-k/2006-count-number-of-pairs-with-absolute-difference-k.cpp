class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int counter = 0;
        int current = 0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                current = abs(nums[i] - nums[j]);
                if(current == k){
                    counter++;
                }
            }
        }
        return counter;
    }
};