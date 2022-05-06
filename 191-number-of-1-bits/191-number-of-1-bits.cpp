#define MASK_FIRST_DIGIT  0x00000001
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        
        
        for(int i=0;i<32;i++){
            if(n & MASK_FIRST_DIGIT == 1){
                counter++;
            }
            n = n>>1;
        }
        return counter;
    }
};