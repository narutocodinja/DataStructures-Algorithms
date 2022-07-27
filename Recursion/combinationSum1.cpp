class Solution{
  public: 
     void f(int i, vector<vector<int>>& candidates, int target, vector<int>& ds, vector<vector<int>>& result, int n){
       if(i == n){
         if(target == 0) result.push_back(ds);
         return;
       }
       
       if(candidates[i] <= target){
         ds.push_back(candidates[i]);
         f(i, candidates, target-candidates[i], ds, result, n);
         ds.pop_back();
       }
       f(i+1, candidates, target, ds, result, n);
     }
     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ds;
        int n = candidates.size();
        f(0, candidates, target ,ds, result,n);
        return result;
    }
}
