class Solution {
public:

    bool checkiftwo(int a,vector<int> nums) {
    
        // int j =a;
        int i =0;
        while(i<nums.size()){
            if(nums[i]==a){
                break;
            }
            i++;
        }
        int save1 = i;
        i = nums.size()-1;
        while(i>0){
            if(nums[i]==a){
                break;
            }
            i--;
        }
        int save2 = i;
        if(save1 == save2){
            return false;
        }
        else {
            return true;
        }
    }

    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        
        int i,j;
        for(int num = 0; num<nums.size(); num++){
            if(!checkiftwo(nums[num], nums)) {
                return nums[num];
            }
        
        }
        return 0;
        
    }

};