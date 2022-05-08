class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int firstDiff = arr[1] - arr[0];
        int currDiff;
        int state = true;
        
        for(int i=1;i<arr.size()-1;i++){
            currDiff = arr[i+1] - arr[i]; 
            if(currDiff != firstDiff){
                state = false;
                break;
            }
        }
        
        return state;
        
    }
};