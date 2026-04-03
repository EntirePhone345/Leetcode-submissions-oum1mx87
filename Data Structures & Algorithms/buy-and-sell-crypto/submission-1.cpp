class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxi = 0;
        for(int i = 0 ; i < arr.size(); i++){
            for(int j = i+1 ; j < arr.size(); j++){
                if(arr[j]>arr[i])
                maxi = max(maxi,arr[j]-arr[i]);
        }
        }
        return maxi;
    }
};
