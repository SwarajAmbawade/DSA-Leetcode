class Solution {
public:
    int mySqrt(int x) {
        int high = x;
        int low = 0;
        long long mid;
        while(low <= high) {
            mid = low + (high-low)/2;

            if(mid*mid == x) {
                return mid;
            }
            else if(mid*mid < x){
                low = mid + 1;
            }
            else if(mid*mid > x) {
                high = mid - 1;
            }

        }
        return high;
    }
};