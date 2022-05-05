class Solution {
public:
    int countOdds(int low, int high) {
        int counter = 0;
        
        if(low%2 == 1 || high%2 == 1){
            counter = ((high-low)/2)+1;
        }
        else{
            counter = (high-low)/2;
        }
        return counter;
    }
};
