class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        
        int mid;
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int hours = 0;
        int div = 0;
        
        while(left<=right){
            mid = left + (right - left) / 2;
            hours = 0;
            for(int i=0;i<piles.size();i++){
                div = piles[i]/mid;
                hours += div;
                
                if(piles[i] % mid != 0){
                    hours++;
                }
            }
            if(hours<=h){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;
        
    }
};