class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag = 0;
        int size = word.length();
        int out = 0;
        cout<<word[size-1]<<endl;
        if(word[size-1] >= 'a' && word[size-1] <= 'z'){
            flag = 1;   //small
        }
        else if(word[size-1] >= 'A' && word[size-1] <= 'Z'){
            flag = 2; //capital
        }
        
        if(flag == 0) return false;
        
        for(int i=0;i<size;i++){
            if(flag == 1){
                if(i != 0 && !(word[i] >= 'a' && word[i] <= 'z')){
                    out =1;
                    break;
                }
            }
            else if(flag == 2){
                if(!(word[i] >= 'A' && word[i] <= 'Z')){
                    out = 1;
                    break;
                }
            }
        }
        if(out == 1) return false;
        return true;
    }
};