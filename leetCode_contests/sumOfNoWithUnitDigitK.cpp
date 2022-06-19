class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num == 0) return 0;
        if(k == 0){
            if(num%10 == 0) return 1;
            return -1;
        }
        
        // if((k<<1)%10 != num%10) return -1;
        
        int count = 1;
        int cur = k;
        while(num%10 != cur%10 && cur < num){
            count ++;
            cur += k;
        }
        
        if(cur > num) return -1;
        
        return count;
    }
};
