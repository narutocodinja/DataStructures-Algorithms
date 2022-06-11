class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool has_one = false;
        int len = nums.size();
        for(auto num : nums){
            if(num == 1) { 
                has_one = true; 
                break;
            }
        }  
        if(!has_one) return 1;
        
        if(len == 1) return 2;
        
        for(int i = 0; i < len; ++i){
            if(nums[i] <= 0 || nums[i] > len) nums[i] = 1;
        }
        
        for(int i = 0; i < len; ++i){
            int temp = abs(nums[i]);
            if(nums[temp - 1] > 0) nums[temp-1] *= -1;
        }
        
        for(int i = 0; i < len; ++i){
            if(nums[i] > 0) return i+1;
        }
        return len+1;
        
    }
};
