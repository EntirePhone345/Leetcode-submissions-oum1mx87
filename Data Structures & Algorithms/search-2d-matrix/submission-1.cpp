class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        vector<int> arr;
        for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
        arr.push_back(mat[i][j]);
    }
}
      int n = arr.size();
        int low = 0;
        int high = n-1;
        int mid;

        while(low<=high){
            mid = low + (high-low)/2;
            if(arr[mid]==target)
                return true;
            else if(arr[mid]>target)
                high = mid-1;
             else if(arr[mid]<target)
                low = mid+1;
    }
    return false;
    }
    
};
