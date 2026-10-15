class Solution {
public:
    int secondHighest(string s) {
        int largest = INT_MIN;
        int slargest = INT_MIN;

        for(int i = 0; i < s.length(); i++){
            if(s[i] <= '9' && s[i] >= '0'){
                int digit = s[i] - '0';
                if(digit > largest){
                    slargest = largest;
                    largest = digit;
                }
                else if(digit > slargest && digit != largest){
                    slargest = digit;
                }
            }
            
        }

        if(slargest == INT_MIN){
            return -1;
        }

        return slargest;


    }
};