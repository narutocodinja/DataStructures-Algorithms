class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<int> result;
        
        int dir = 0;
        int top = 0, bottom = rows-1;
        int left = 0, right = cols-1;
        
        while(top <= bottom && left <= right){
            if(dir == 0){
                for(int i = left; i <= right; i++){
                    result.push_back(matrix[top][i]);
                }
                top += 1;
            }
            
            else if(dir == 1){
                    for(int i = top; i <= bottom; i++){
                    result.push_back(matrix[i][right]);
                }
                right -= 1;
            }
                
            else if(dir == 2){
                for(int i = right; i >= left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom -= 1;
            }
                
            else if(dir == 3){
                for(int i = bottom; i >= top; i--){
                    result.push_back(matrix[i][left]);
                }
                left += 1;                
            }
            
            dir = (dir + 1)%4;
        }
        return result;
        
    }
};
