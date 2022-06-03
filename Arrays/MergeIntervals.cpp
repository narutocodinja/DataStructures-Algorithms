vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;
        if(n == 0) return result;

        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];
        
        for(auto it : intervals){
            if(it[0] <= temp[1]){
                temp[1] = max(temp[1], it[1]);
            }
            else{
                result.push_back(temp);
                temp = it;
            }
        }
        result.push_back(temp);
        return result;
        
    }
