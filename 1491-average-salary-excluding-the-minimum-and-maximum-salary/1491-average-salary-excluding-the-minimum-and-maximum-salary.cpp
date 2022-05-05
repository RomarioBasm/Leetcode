class Solution {
public:
    double average(vector<int>& salary) {
        double average = 0;
        int size = salary.size() -2;
        
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            average += salary[i];
        }
        
        average = average / size;
        return average;
        
    }
};