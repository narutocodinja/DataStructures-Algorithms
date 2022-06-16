class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> ref;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++){
            int req_num = target - nums[i];
            if(ref.find(req_num) != ref.end()){
                result.push_back(ref[req_num]);
                result.push_back(i);
                return result;
            }
            ref[nums[i]] = i;
        }
        return result;
    }
};
