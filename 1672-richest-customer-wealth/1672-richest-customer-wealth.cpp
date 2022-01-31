class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int money = 0;
        int max = 0;
        
        for(int i=0;i<accounts.size();i++){
            money = 0;
            for(int j=0;j<accounts[0].size();j++){
                money += accounts[i][j];    
            }
            if(money > max){
                max = money;
            }
        }
        return max;
    }
};