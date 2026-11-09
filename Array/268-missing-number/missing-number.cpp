class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0;
        bool flag = false;
        while(i < nums.size()) {
            if(i != nums[i]){
                flag = true;
                return i;
            }
            i++;
        }
        if(!flag) {
            return n;
        }
        return 0;
    }
};