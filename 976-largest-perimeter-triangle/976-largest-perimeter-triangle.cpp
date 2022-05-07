class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int perimeter = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i] + nums[i+1] > nums[i+2]){ //valid triangle
                perimeter = nums[i] + nums[i+1] + nums[i+2];
            }
        }
        if(perimeter == 0){ //not found
            return 0;
        }
        return perimeter;
    }
};