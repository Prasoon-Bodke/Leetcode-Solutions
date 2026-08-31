class Solution {
public:
    double myPow(double x, int n) {

        long long exp = n;
        double ans = 1;

        if(exp < 0){
            exp = -exp;
            x = 1 / x;
        }

        while(exp > 0){
            if(exp % 2 == 1){
                ans *= x;
            }

            x *= x;
            exp /= 2;
            
        }
        return ans;
    }
};