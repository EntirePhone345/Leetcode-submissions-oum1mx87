class Solution {
public:
    bool inarr(vector<int>arr , int key){
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i]==key)
            return true;
        }
        return false;
    }
    int tosqr(int n){
        int a = 0;
        while(n){
            a+=(n%10)*(n%10);
            n/=10;
        }
        return a;
    }
    bool isHappy(int n) {
       unordered_set<int> seen;
       while(n != 1){
            if(seen.count(n))
                return false;

            seen.insert(n);
            n = tosqr(n);
        }
        return true;

    }
};
