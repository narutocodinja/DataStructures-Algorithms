class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int result = INT_MAX;
        unordered_map<int,int> freq;
        
        for(int window_end = 0; window_end < cards.size(); window_end++){
            if(freq.find(cards[window_end]) == freq.end())
                freq[cards[window_end]] = window_end;

            else{
                result = min(result, window_end - freq[cards[window_end]] + 1);
                freq[cards[window_end]] = window_end;
                if(freq[cards[window_end]] == 0) freq.erase(cards[window_end]);
            }

        }
        if(result == INT_MAX) return -1;
        return result;
    }
};
