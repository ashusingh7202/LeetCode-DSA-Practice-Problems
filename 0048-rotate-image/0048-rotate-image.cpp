#include <algorithm>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    //Transpose
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse every row
    for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<end){
            swap(matrix[i][st],matrix[i][end]);
            st++;
            end--;
        }
    }    
    }
};