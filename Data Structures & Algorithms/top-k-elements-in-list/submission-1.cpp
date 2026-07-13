class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        vector<int> arr;
        for(auto pair : mp){
            int b = pair.second;

            arr.push_back(b);
        }
        sort(arr.begin(),arr.end(),greater());

        set<int> brr;
        for(auto pair : mp){
            int a = pair.first;
            int b = pair.second;

            for(int i = 0 ; i < k ; i++){
                if(b == arr[i])
                brr.insert(a);
            }
        }

        return vector<int>(brr.begin(), brr.end());

    }
};