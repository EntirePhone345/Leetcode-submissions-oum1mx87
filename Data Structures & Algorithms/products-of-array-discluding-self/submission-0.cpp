class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int isok = 1;
        int zero=0;
        int prod = 1;
        int n = nums.size();
        for(int i = 0;i < n ; i++){
            if(nums[i]==0)
            {zero++;
            continue;}
           
            prod*=nums[i];
        }
        
        vector<int> ans(n);
        if(zero>1){
            for(int i = 0;i < n ; i++){
            ans[i] = 0;
        }
        }
        else if(zero==1){
            for(int i = 0;i < n ; i++){
                if(nums[i]==0){
                   ans[i] = prod;
                   continue;
                }
            ans[i] = 0;
        }
        }
        else
        {
        for(int i = 0;i < n ; i++){
            ans[i] = prod/nums[i];
        }
        }
        return ans;

    }
};