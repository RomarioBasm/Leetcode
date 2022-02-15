class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int p1,p2,p3;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int result = -1;
        for(int i=0;i<size-2;i=i+3){
            p1 = nums[i];
            p2 = nums[i+1];
            p3 = nums[i+2];
            
            if(p1 != p2 || p1 != p3){
                if(p1 == p2){
                    result =  p3;
                    break;
                    
                }
                else if(p2 == p3){
                    result = p1;
                    break;
                }
            }           
        }
        if(result == -1){
            result = nums[size-1];
        }
        return result;
    }
};