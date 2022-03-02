class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool result = false;
        
        int size1 = t.size();
        int size2 = s.size();
        
        int index = 0;
        
        for(int i=0;i<size1;i++){
            if(t[i] == s[index]){
                index++;
            }
        } 
        
        if(index == size2){
            result = true;
        }
        
        return result;
    }
};