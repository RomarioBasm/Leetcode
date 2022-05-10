class Solution {
public:
    
     bool isValid(string s) {
        vector <char> stack;
        bool result = false;
        char pop;
        
        for(int i=0;i<s.size();i++){
            if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')){
                stack.push_back(s[i]);
            }
            else if((s[i] == ')') || (s[i] == ']') || (s[i] == '}')){
                if (stack.empty()){
                    return false;
                }
                pop = stack[stack.size()-1];
                stack.pop_back();
                if(s[i] == ')'){
                    if (pop != '('){
                        return false;
                    }
                }
                else if(s[i]==']'){
                     if (pop != '['){
                        return false;
                     }
                }
                else if(s[i] == '}'){
                     if (pop != '{'){
                        return false;
                     }
                } 
            }
        }
        
        if (stack.empty()){ 
            result = true;
        }
        return result;
    }
};