class Solution {
public:

    long long climbStairs(int n) {
        vector<int> arr(n+1,0);
        arr[0]=1;
        arr[1]=2;
        for(int i = 2; i< n+ 1; i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n-1];
    }
};
