class Solution {
public:
   string addBinary(string a, string b) {
        
        string result;
        
        int a_size = a.size()-1;
        int b_size = b.size()-1;

        int sum = 0;
        int carry = 0;
        
        int ch1;
        int ch2;
        
        while(a_size>=0 || b_size>=0){
            ch1=0; ch2=0;
            if(a_size>=0) {
                ch1 = a[a_size--] -'0';
            }
           
         
            
            if(b_size>=0) {
                ch2 = b[b_size--] -'0';
            }
           
            
            sum = ch1+ch2+carry;
            result.append(to_string(sum%2));
            carry = sum/2;
        }
    
        if(carry > 0){
            result.append(to_string(1));
        }
        reverse(result.begin(),result.end());
        return result;
    }
};