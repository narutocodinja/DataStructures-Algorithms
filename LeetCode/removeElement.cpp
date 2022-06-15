class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        
        while(j < nums.size()){
            if(nums[j] != val){
                // int temp = nums[i];
                // nums[i] = nums[j];
                // nums[j] = temp;
                // i++;j++;
                nums[i++] = nums[j++];
            }
            else j ++;
        }
        return i;
    }
};
