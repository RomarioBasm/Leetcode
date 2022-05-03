class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> result;
        string current;
        
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                current = "FizzBuzz";
            }
            else if(i%5==0){
                current = "Buzz";
            }
            else if(i%3==0){
                current = "Fizz";
            }
            else{
                current = to_string(i);
            }
            result.push_back(current);
        }
        return result;
    }
};