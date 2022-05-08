class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        long prod = 1;
        int sign;
        
        for(int i=0;i<nums.size();i++){
            if(prod>0){
                prod = 1;
            }
            else if(prod<0){
                prod = -1;
            }
            prod *= nums[i];
        }
        
        
        if(prod == 0){
            sign = 0;
        }
        else if(prod>0){
            sign = 1;
        }
        else{
            sign = -1;
        }
        return sign;
    }
};