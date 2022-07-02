class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int h1 = 0, h2 = 0;
        for(int num : nums){
            int temp = h1;
            h1 = max(h2 + num,h1);
            h2 = temp;
        }
        return h1;
    }
};
