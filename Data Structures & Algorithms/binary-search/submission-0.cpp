class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
    int f2 = 0;
    int f1 = 1;
    int f = f1 + f2;

    while(f < n){
        f2 = f1;
        f1 = f;
        f = f1 + f2;
    }

    int off = -1;

    while(f > 1){
        int i = min(off + f2, n - 1);

        if(arr[i] < x){
            f = f1;
            f1 = f2;
            f2 = f - f1;
            off = i;
        }
        else if(arr[i] > x){
            f = f2;
            f1 = f1 - f2;
            f2 = f - f1;
        }
        else{
            return i;
        }
    }

    if(f1 && off + 1 < n && arr[off + 1] == x){
        return off + 1;
    }

    return -1;
    }
};