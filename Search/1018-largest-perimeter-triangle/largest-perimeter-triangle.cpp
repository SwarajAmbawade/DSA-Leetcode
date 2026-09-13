class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int a,b,c;
        sort(nums.begin(), nums.end());

        int i = nums.size()-1;
        while(i>=2) {
            c = nums[i];
            b = nums[i-1];
            a = nums[i-2];
            if(a + b > c && a + c > b && b + c > a) {
                return a+b+c;
            }
            i--;
        }

        return 0;
    }
};