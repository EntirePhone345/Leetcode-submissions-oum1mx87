class Solution {
public:
    int tosqr(int n){
        int a = 0;
        while(n){
            a+=(n%10)*(n%10);
            n/=10;
        }
        return a;
    }
    bool isHappy(int n) {
       int slow = n;
        int fast = n;

        do {
            slow = tosqr(slow);          
            fast = tosqr(tosqr(fast));   
        } while(slow != fast);

        return slow == 1;
    }
};
