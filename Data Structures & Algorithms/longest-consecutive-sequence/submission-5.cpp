class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set<int> s(nums.begin(), nums.end());
       int l = 0;

       for(int num : s) {
            if(!s.count(num - 1)) {   
                int curr = num;
                int len = 1;
                while(s.count(curr + 1)) {
                    curr++;
                    len++;
                }

                l = max(l, len);
            }
        }

        return l;
    
    }
};