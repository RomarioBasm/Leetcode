class Solution {
public:
   int numberOfArithmeticSlices(vector<int>& nums) {
    
        int size    = nums.size();
        int result  = 0;
        int diff    = 0; 
        int counter = 2;

        if(size<3){
            return result;
        }

        diff = nums[1] - nums[0]; // first difference
        for(int i=1;i<size-1;i++){

            if((nums[i+1] - nums[i]) == diff){ 
               counter++;
            }

            else if(counter>2) {
                result += (counter-2) * (counter-1) / 2;
                counter=2;
                diff = nums[i+1] - nums[i]; 
            }

            else{
                counter=2;
                diff = nums[i+1] - nums[i];
            }  
        }
        if(counter>2){
             result += (counter-2) * (counter-1) / 2;
        }
        return result;
    }

};