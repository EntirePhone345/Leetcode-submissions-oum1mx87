class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> c(nums1.size() + nums2.size());

    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), c.begin());


    int n = c.size();
    if(n%2==1)
    return c[(n-1)/2];
    else
    {
        double a = c[(n)/2];
        double b = c[(n-2)/2];
        return (a+b)/2;
    }
    
}
};