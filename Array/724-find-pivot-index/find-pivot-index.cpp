class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right;
        int totalsum;

        totalsum = accumulate(nums.begin(), nums.end(), 0);

        for(int i = 0; i<nums.size(); i++) {
            right = totalsum - left - nums[i];

            if(left == right) {
                return i;
            }

            left = left + nums[i];
        }

        return -1;
    }
};