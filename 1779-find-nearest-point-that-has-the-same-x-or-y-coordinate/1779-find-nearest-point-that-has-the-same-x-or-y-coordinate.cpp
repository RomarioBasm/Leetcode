class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int currIndex = -1; //no valid points
        int smallestDistance = -1;
        int currDistance = 0;
        
        for(int i=0;i<points.size();i++){
            if(points[i][0] == x || points[i][1] == y){ //valid point
                currDistance = abs(x-points[i][0]) + abs(y-points[i][1]); //currDistance
                
                if(currDistance < smallestDistance || smallestDistance == -1){//first enterance
                    smallestDistance = currDistance;
                    currIndex = i;
                }
            }
        }
        
        return currIndex;
    }
};