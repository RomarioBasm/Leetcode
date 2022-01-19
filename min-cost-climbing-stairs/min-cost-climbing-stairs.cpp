class Solution {
public:
    unordered_map<int, int> memory;
    vector<int> cost;
    int minCost = 0;
    int dp(int n){
        
        //base case
        if(n == 0) return cost[0];
        if(n == 1) return cost[1];
        
        
        if(memory.find(n) == memory.end()){ //not found
            minCost = std::min(dp(n-1), dp(n-2))+cost[n];
            memory.insert(make_pair(n,minCost));
        }
        
        return memory.at(n); //found
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        this->cost = cost;
        return std::min(dp(cost.size()-1),dp(cost.size()-2));
    }
};