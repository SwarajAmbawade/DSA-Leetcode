class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.size(); i++) {
            bool k = true;
            for(int j = 0; j < s.size(); j++) {
                if(s[i] == s[j] && i != j) {
                    k = false;
                    break;
                }
            }
            if(k) {
                return i;
            }
        }
        return -1;
    }
};