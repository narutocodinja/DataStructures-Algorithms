class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result(m);
        int k = 0;
        int size = m*n;
        if(size != original.size()) return {};
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                result[i].push_back(original[k++]);
            }
        }
        return result;
    }
};
