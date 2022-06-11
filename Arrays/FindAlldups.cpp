class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> result;
        // unordered_map<int,int> freq;
        // for(auto it : nums){
        //     freq[it]++;
        // }
        // for(auto i : freq){
        //     if(i.second == 2) result.push_back(i.first);
        // }
        // return result;
        
        //optimized
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[abs(nums[i]) - 1] < 0) result.push_back(abs(nums[i]));
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        return result;
    }
};
