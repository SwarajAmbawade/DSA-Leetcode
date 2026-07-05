class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ones = 0;

        for(int i = 0; i < nums.size(); i++) {

                if(nums[i] == 1) {
                    count++;
                }
                else {
                    ones = max(ones, count);
                    count = 0;
                }
            }

    ones = max(ones, count);

    return ones;
    }
};