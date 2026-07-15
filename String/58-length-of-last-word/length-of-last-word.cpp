class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.length()-1; i>=0; i--) {
            if(s[i] == ' ') {
                continue;
            }
            else {
                while(i>=0) {
                    if(s[i] == ' ') {
                        return count;
                    }
                    count++;
                    i--;
                }
            }
            return count;
        }
        return count;
    }
    
};