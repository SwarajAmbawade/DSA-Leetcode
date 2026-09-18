class Solution {
public:
    bool isPalindrome(int x) {
        // long rev=0;
        // long digit=0;
        if(x<0){
            return false;
        }
        int reversedNO = ispali(x,0);
        return reversedNO == x;
    }

    int ispali(int t, long rev) {
        if(t==0) {
            return rev;
        }

        long digit = t % 10;
        rev = rev*10 + digit;
        t=t/10;

        return ispali(t,rev);
    }
};

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         long t=x;
//         long rev=0;
//         long digit=0;

//         while(t>0)
//         {
//             digit = t % 10;
//             rev = rev*10 + digit;
//             t= t/10;
//         }

//         return rev==x;

//     }
// };