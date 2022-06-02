int maxSubArray(vector<int>& nums) {
        auto curSum = 0;
        auto maxSum = nums[0];
        
        for(auto it : nums){
            curSum += it;
            if(curSum > maxSum) maxSum = curSum;            
            if(curSum < 0) curSum = 0;
        }
        return maxSum;
    }
