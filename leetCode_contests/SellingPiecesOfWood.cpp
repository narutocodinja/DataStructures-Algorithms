class Solution {
public:
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        long long dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        
        map<pair<int,int>,int> ref;
        
        for(int i = 0; i < prices.size(); i++){
            dp[prices[i][0]][prices[i][1]] = prices[i][2];
        }
        
        for(int i = 1; i <= m; i++){
            for(int j =1;j <= n; j++){
                dp[i][j] = max(dp[i][j], dp[i-1][j]);
                dp[i][j] = max(dp[i][j], dp[i][j-1]);
                
                for(int k = 0; k <= i; k++)
                    dp[i][j] = max(dp[i][j], dp[i-k][j] + dp[k][j]);
                
                for(int k = 0; k <= j; k++)
                    dp[i][j] = max(dp[i][j], dp[i][j-k] + dp[i][k]);
            }
        }
        
        return dp[m][n];
    }
};
