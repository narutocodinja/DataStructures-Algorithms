class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,1);
        
//         vector<int> left(n);
//         left[0] = 1;
//         vector<int> right(n);
//         right[0] = 1;
        
//         for(int i = 1; i < n; i++){
//             left[i] = left[i-1] * nums[i-1];
//             right[i] = right[i-1] * nums[n-i];
//         }
        
//         for(int i = 0; i< n; i++){
//             result[i] = left[i] * right[n-i-1];
//         }
//         return result;
        
        //space optimization
        int left = 1, right = 1;
        for(int i = 0; i < n; i++){
            result[i] *= left;
            left *= nums[i];
            result[n-1-i] *= right;
            right *= nums[n-1-i];
        }
        return result;
    }
};
