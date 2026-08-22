class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        long long sum = 0;
        long long prod = 1; 
        int ans = 0;
        while(num){
            ans = num%10;
            sum+=ans;
            prod*=ans;
            num = num/10;
        }
        long long plus = sum + prod;
        if(n % plus == 0) return true;
        else return false;
    }
};