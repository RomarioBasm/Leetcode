class Solution {
public:
    
    unordered_map<int, int> memory;
    int maxNum = 0;
    vector<int> nums;
    
    int dp(int n){
        if(n == 0) return nums[0];
        if(n == 1) return std::max(nums[0],nums[1]);
        
        if(memory.find(n) == memory.end()){
            maxNum = std::max(dp(n-1), (dp(n-2)+nums[n]));
            memory.insert(make_pair(n, maxNum));
        }
        
        return memory.at(n);
    }
    
    int rob(vector<int>& nums) {
        this->nums = nums;
        return dp(nums.size()-1);
    }
};