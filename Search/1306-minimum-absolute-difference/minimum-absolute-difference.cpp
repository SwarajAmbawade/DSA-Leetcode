class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // buuble sort
        // for(int i=0; i<arr.size()-1; i++) {
        //     for(int j=0; j<arr.size()-1; j++) {
        //         if(arr[j] > arr[j+1]) {
        //             int temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }
        //     }
        // }
        sort(arr.begin(), arr.end());
        // now we have sorted arr
        vector<vector<int>> result;
        result = {};

        int min=INT_MAX;
        int a,b;
        for(int i = 1; i<arr.size(); i++) {
            a = arr[i-1];
            b = arr[i];
            if(min > b-a) {
                min = b-a;
            }
        }

        for(int i = 1; i<arr.size(); i++) {
            a = arr[i-1];
            b = arr[i];
            if(min == b-a) {
                result.push_back({a,b});
            }
        }
        return result;
    }
};