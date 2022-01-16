class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),0);
        vector<int> left(nums.size(),0);
        vector<int> right(nums.size(),0);
        int size = nums.size();
        
        left[0] = 1;
        for(int i=1;i<size;i++){
            left[i] = left[i-1] * nums[i-1];
        }
        
        right[size-1] = 1;
        for(int i=size-2;i>=0;i--){
            right[i] = right[i+1] * nums[i+1];
        }
        
        for(int i=0;i<size;i++){
            result[i] = left[i] * right[i];
        }
        
        return result;
    }
};