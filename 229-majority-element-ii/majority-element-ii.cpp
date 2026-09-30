class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int el_1 = 0;
        int el_2 = 0;
        vector<int> maj;

        for (int num : nums)
        {
            if (el_1 == num)
                count1++;

            else if (el_2 == num)
                count2++;

            else if (count1 == 0)
            {
                el_1 = num;
                count1 = 1;
            }

            else if (count2 == 0)
            {
                el_2 = num;
                count2 = 1;
            }

            else
            {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for(int x: nums)
        {
            if(x == el_1)
            {
                count1++;
            }
            else if(x == el_2)
            {
                count2++;
            }
        }

        if(count1 > nums.size()/3)
        {
            maj.push_back(el_1);
        }
        if(count2 > nums.size()/3)
        {
            maj.push_back(el_2);
        }

        return maj;
    }
};