class Solution {
public:
    bool isPalindrome(string s) {
        string sentence = "";
        for(int i=0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                sentence += tolower(s[i]);
            }
        }

        int count = sentence.length() -1;
        for(int i=0; i<sentence.length()/2; i++) {
            if(sentence[i] != sentence[count]) {
                return false;
            }
            count--;
        }
        return true;
    }
};