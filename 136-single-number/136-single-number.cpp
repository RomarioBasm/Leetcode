class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(),nums.end());
        if(nums.size() == 1){
            result = nums[0];
        }
        else{
            for(int i=0;i<nums.size();i=i+2){
                if(nums[i] != nums[i+1]){
                    result = nums[i];
                    break;
                }
            
            }
        }
        return result;
        
    }
};