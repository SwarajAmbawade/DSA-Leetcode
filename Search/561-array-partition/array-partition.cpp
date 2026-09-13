class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;

        vector<vector<int>> result;
        result = {};

        for(int i =0; i<nums.size(); i+= 2){
            result.push_back({nums[i], nums[i+1]});
        }

        int sum = 0;
        for(int j=0; j<result.size(); j++) {
            sum = sum + result[j][0];
        }

        return sum;
    }
};