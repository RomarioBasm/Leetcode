class Solution {
public:
    /*int myAtoi(string s) {
        int num = 0;
        int sign = 0; //0 = pos, 1 = neg.
        int index = 0;
        int maxIndex = 0;
        long overflow = 2147483648;
        int flag = 0;
        while(s[index] == ' '){//leading chars
            index++;
        }
    
        if(s[index] == '-'){ //negative sign
            sign = 1;
            index ++;
            flag++;
        }
        if(s[index] == '+'){ //negative sign
            sign = 0;
            index ++;
            flag++;
        }
        if(flag == 2){
            return 0;
        }
        
        //parsing the number
        while(s[index]>='0' && s[index]<='9'&& maxIndex<9){
            num = num*10 + (s[index]-'0');
            index++;
            maxIndex++;
        }
        if(maxIndex == 9){
            return sign?-overflow:overflow;
        }
        return sign? -num: num;
    }*/
     int myAtoi(string s) {
        
        // helper variables
        int res=0;
        int i=0;
        int sign=1;
		
        while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        
        if(s[i]=='-'||s[i]=='+')          //check if number positve or negative
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        // now iterate across digits if any
		// should only be in range 0-9
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  //traverse string till nondigit not found or string ends
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
            if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
            res=res*10+digit; // update res
            i++;
        }
    
    return res;
    }

};