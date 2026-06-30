class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int dp[n];
        dp[0] = nums[0];

        for(int i=1;i<n;i++){
            if(i == 1){
                dp[i] = max(dp[i-1], nums[i]);
            } else {
                dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
            } 
        }
        return dp[n-1];
        //2 9  8   3   6
       // 2 9  10  12  16
    }
};
