class Solution {
public:
    int climbStairs(int n) {
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        int one_bfr = 2;
        int two_bfr = 1;
        int ans = 0;
        
        for(int i = 2; i < n; i++){
            ans = one_bfr + two_bfr;
            two_bfr = one_bfr;
            one_bfr = ans;
        }
        
        return ans;
    }
};
