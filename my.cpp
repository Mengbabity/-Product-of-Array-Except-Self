class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        
        if(n==2)
            return {nums[1],nums[0]};
        
        vector<int> res;
        int tmp=0;
        
        for(int i=0;i<n;i++)
        {
            int front=1;
            int back=1;
            for(int j=0;j<i;j++)
            {
                front*=nums[j];
            }

            for(int k=n-1;k>i;k--)
            {
                back*=nums[k];
            }

            tmp=front*back;
            
            res.push_back(tmp);
        }
        
        return res;
    }
};
