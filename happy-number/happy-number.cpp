class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> sums;
        int sum = 0;
        
        while (sums.count(sum) == 0){
            sums.insert(sum);
            sum = 0;
            
            while(n > 0){
                int digit = n%10;
                n = n/10;
                sum = digit*digit + sum;
            }
            n = sum;

        }
        
        if(sum == 1){
            return true;
        }
        else {
            return false;
        }
        
    }
};