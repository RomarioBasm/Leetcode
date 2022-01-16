class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = *max_element(prices.begin(), prices.end());
        
        for(int i=0;i<prices.size();i++){ 
           if(prices[i] < min){
               min = prices[i];
           } 
           else{
               max = std::max(max, prices[i] - min);
           }
        }
        return max;
    }
};