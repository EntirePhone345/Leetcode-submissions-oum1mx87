class Solution {
public:
    bool inarr(vector<int> arr , int key){
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
        vector<int> arr;
        int a = 1;
        while(a){
            n = tosqr(n);
            if(inarr(arr,n))
            return false;
            arr.push_back(n);
            if(n==1)
            return true;
        }
        return true;
    }
};
