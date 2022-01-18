class Solution {
public:
    
    unordered_map<int, int> memory;
    int dp(int n){
        
        if(n<=2){
            return n;
        }
        
        if(memory.find(n) == memory.end()){
            memory.insert(make_pair(n, dp(n-1) + dp(n-2)));
        }
        
        return memory.at(n); 
    }
    
    
    int climbStairs(int n) {
        return dp(n);
    }
};