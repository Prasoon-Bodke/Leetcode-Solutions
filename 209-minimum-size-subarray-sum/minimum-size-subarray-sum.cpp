class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minlength = INT_MAX;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(sum >= target){
                int len = right - left + 1;
                minlength = min(minlength, len);
                sum -= nums[left];
                left++;
            }
        }

        if(minlength > nums.size()){
            return 0;
        }
        else{
            return minlength;
        }

    }
};