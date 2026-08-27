class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if(x<0){
            sign = -1;
        }

        long long n = abs((long long) x);
        long long rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }

        return rev*sign;
    }
};