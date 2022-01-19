class Solution {
public:
    
    unordered_map<int, int> memory;
    
    int dp(int n){
        
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        
        if(memory.find(n) == memory.end()){
            memory.insert(make_pair(n, dp(n-1) + dp(n-2) +dp(n-3)));
        }
        
        return memory.at(n); 
    }
    
    int tribonacci(int n) {
        return dp(n);
    }
};