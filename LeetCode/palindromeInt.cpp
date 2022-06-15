class Solution {
public:
    int reverse_no(int x){
        long long rev = 0;
        while(x > 0){
            int digit = x%10;
            x /= 10;
            rev = (rev*10) + digit;
        }
        return rev;
    }
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        int check = reverse_no(x);
        if(check == x) return true;
        
        return false;
    }
};
