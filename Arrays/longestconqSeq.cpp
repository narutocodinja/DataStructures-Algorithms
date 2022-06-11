class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int result = 0;    
        
        for(auto num : nums){
            if(!s.count(num-1)){
                int cur_num = num;
                int cur_len = 1;
                
                while(s.count(cur_num+1)){
                    cur_len ++;
                    cur_num ++;
                }
                
                result = max(result, cur_len);
            }
        }
        return result;
    }
};
