class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int val = nums[i];

            int tempMax = maxEnding;
            int tempMin = minEnding;

            maxEnding = max(val, max(tempMax * val, tempMin * val));
            minEnding = min(val, min(tempMax * val, tempMin * val));

            ans = max(ans, maxEnding);
        }

        return ans;
    }
};

