class Solution {
public:
    int longestSubsequence(string s, int k) {
        int j = 0, sum = 0, res = 0;
        bool stop = 0;
        
        for(int i = s.size()-1; i>= 0; i --){
            if(s[i] == '0') res ++;
            else if(stop == 0 && j < 31){
                sum += pow(2,j);
                if(sum > k){
                    stop = 1;
                    sum -=pow(2,j);
                }
                else{
                    res++;
                }
            }
            j++;
        }
        return res;
    }
};
