class Solution {
public:
    string greatestLetter(string s) {
        string lower = "";
        string upper = "";
        string res = "";
        
        for(int i = 0; i < s.size();i++){
            if(islower(s[i]))
                lower += s[i];
            else upper += s[i];
        }
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        
        for(auto i = upper.end()-1; i >= upper.begin(); i --){
            for(auto j = lower.end()-1; j>=lower.begin(); j --){
                if(tolower(*i) == *j){
                    res += *i;
                    return res;
                }
            }
        }
        return res;
    }
};
