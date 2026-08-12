class Solution {
public:
    int subtractProductAndSum(int n) {
        int haig=1,sum=0;
        while (n!=0){
            int digit=n%10;
            haig *= digit;
            sum += digit;
            n /= 10;
        }
        return haig - sum;
        
    }
};
