class Solution {
public:
    int climbStairs(int n) {
        
        int i;
        

        if (n == 1) {
            return 1;
        }
        
        int a = 2;
        int b = 1;

        for (i = 3; i <= n; i++) {
            int sum = a + b;
            b = a;
            a = sum;
        }

        return a;
    }
};
