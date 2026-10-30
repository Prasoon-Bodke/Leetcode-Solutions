class Solution {
public:

    bool isVowel(char c){
        c = tolower(c);
        return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string reverseVowels(string s) {
        int low = 0;
        int high = s.size() - 1;

        while(low < high){
            if(!isVowel(s[low])){
                low++;
            }

            else if(!isVowel(s[high])){
                high--;
            }

            else{
                swap(s[low++], s[high--]);
            }
        }

        return s;
    }
};