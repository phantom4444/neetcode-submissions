class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return nums[0];

        if(n == 2)
            return max(nums[0], nums[1]);

        int ans=0;

        int a = nums[0];
        int b = max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++){
            int c = a + nums[i];

            a = b;
            b = max(b,c);
        }

        ans = max(ans,b);

        a = nums[1];
        b = max(nums[2], nums[1]);

        for(int i=3;i<n;i++){
            int c = max(nums[i]+a, b);

            a = b;
            b = max(b,c);
        }

        ans = max(ans, b);
        return ans;
    }
};
