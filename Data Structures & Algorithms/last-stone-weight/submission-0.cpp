class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        int n = arr.size();
        while(n>1){
           sort(arr.begin(),arr.end());
            if(arr[n-1]==arr[n-2])
           {arr.pop_back();
           arr.pop_back();
           n-=2;}
            else
            {int d = arr[n-1]-arr[n-2];
            arr.pop_back();arr.pop_back();
            arr.push_back(d);
            n--;}
        }
        if(n)
        return arr[0];
        else
        return 0;
    }
};
