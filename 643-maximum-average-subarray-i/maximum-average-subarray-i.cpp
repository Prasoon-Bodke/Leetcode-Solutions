class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double maxavg = INT_MIN;
        double sum = 0;

        for(int right = 0; right < nums.size(); right++){

            sum += nums[right]; 

            if(right - left + 1 == k){
                double avg = sum / k;
                maxavg = max(maxavg, avg);

                sum -= nums[left];
                left++;
            }
        }
        return maxavg;

    }
};