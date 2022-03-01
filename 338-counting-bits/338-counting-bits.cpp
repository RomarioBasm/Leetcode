class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int currNum  = 0;
        int counter  = 0;
        int lstdigit = 0;
        for(int i=0;i<=n;i++){
            /* Convert the decimal number to a binary number, then sum the number of 1's */
            counter = 0;
            currNum = i;
            while(currNum>0){
                lstdigit = currNum%2;
                if(lstdigit == 1){
                    counter++;
                }
                currNum/=2;
            }
            ans.push_back(counter);
        }
        return ans;
        
    }
};