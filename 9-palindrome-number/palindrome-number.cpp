class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string rev = "";
        string ans = to_string(x);

        for(int i = ans.length() - 1; i >= 0; i--) {
            char ch = ans[i];
            rev += ch;
        }

        if(ans == rev){
            return true;
        }
        else{
            return false;
        }

    }
};