class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>> result;
        vector<int> mapping(500,-1); //initailly
        int curr = 0;
        
        for(int i=0;i<groupSizes.size();i++){
            
            if(mapping[groupSizes[i]] == -1){ //first element in this group
                mapping[groupSizes[i]] = curr;
                result.push_back(std::vector<int>());
                result[mapping[groupSizes[i]]].push_back(i);
                curr++;
            }
            else{ //found.
                if(result[mapping[groupSizes[i]]].size() == groupSizes[i]){//max
                    mapping[groupSizes[i]] = curr;
                    result.push_back(std::vector<int>());
                    curr++;
                }
                result[mapping[groupSizes[i]]].push_back(i);
            }
        }
        
        return result;
    }
};