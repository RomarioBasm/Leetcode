class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double cups[101][101] = {0.0}; //empty cups.
        
        cups[0][0] = poured; //put all the poured wine in the first glass
        
        for(int i=0;i<100;i++){ // loop through all the rows
            for(int j=0;j<=i;j++){ // interate through the number of cups in the row
                if(cups[i][j]>=1){ // if the cup is fulled, so split the reminder in the lower two
                    cups[i+1][j] += (cups[i][j]-1)/2; 
                    cups[i+1][j+1] += (cups[i][j]-1)/2;
                    cups[i][j] = 1; // then keep it as a fulled cup.
                }
            }
        }
        
        return cups[query_row][query_glass];
    }
};