class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int n = r*c;
        int l = 0;
        int h = r*c-1;
        bool found = false;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(matrix[mid/c][mid%c] == target)
            {found = true;
            break;}
            else if(matrix[mid/c][mid%c] < target)
            l = mid+1;
            else 
            h = mid-1;
        }
        return found;
    }
};