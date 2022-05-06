class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum = 0;
        int product = 1;
        int currentDigit;
        
        while(n>0){
            currentDigit = n % 10;
            n /= 10;
            
            sum += currentDigit;
            product *= currentDigit;
        }
        return product - sum;
    }
};