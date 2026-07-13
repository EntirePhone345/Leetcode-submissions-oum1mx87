class Solution {
public:
    bool check(const vector<int>&arr , int h , int i){
        long long sum = 0;
        for(auto it : arr){
            sum+=(it + i - 1) / i;
        }
        if(sum<=h)
        return true;
        else
        return false;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        long long m = *max_element(arr.begin(),arr.end());
        int low = 1;
        long long high = m;
        int ans = high;
       while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(arr, h, mid)) {
                ans = mid;        
                high = mid - 1;   
            } else {
                low = mid + 1;  
            }
        }
        return ans;
    }
};