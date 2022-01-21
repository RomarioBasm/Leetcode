class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int size1 = word1.size();
        int size2 = word2.size();
        int size = 0;
        string string1 = "";
        string string2 = "";
        for(int i=0;i<size1;i++){
            string1 = string1 + word1[i];
        }
        for(int i=0;i<size2;i++){
            string2 = string2 + word2[i];
        }
        if(string1.length() != string2.length()){
            return false;
        }
        size = string1.length();
        for(int i=0;i<size;i++){
            if(string1[i] != string2[i]){
                return false;
            }
        }
        return true;
    }
};