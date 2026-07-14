class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 0) {
            return 0;
        }
        int p = 1;
        int ini = 0;

        for(int i=1; i<nums.size(); i++) {
            if (nums[i] != nums[ini]) {
                ini++;
                nums[ini] = nums[i];
                p++;
            }
            else {
                continue;
            }
        }
        return p;
    } 
};