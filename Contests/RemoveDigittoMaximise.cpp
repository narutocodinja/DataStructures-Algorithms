class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<int> ref;
        string result = "";
        for(int i = 0; i < number.size(); i++){
            if(number[i] == digit) ref.push_back(i);
        }
        
        for(int ind : ref){
            string temp = number;
            temp.erase(temp.begin() + ind);
            result = max(temp,result);
        }
        
        return result;
    }
};
