class Solution {
public:
    int addDigits(int num) {
        int addition = 0;
        
        return addall(num,addition);
    }

    int addall(int n, int addition) {
        if(!n){
            if(addition/10 == 0){
                return addition;
            }
            n = addition;
            addition = 0;
        }
        addition += n%10;
        n = n/10;
        return addall(n,addition);
    }

};