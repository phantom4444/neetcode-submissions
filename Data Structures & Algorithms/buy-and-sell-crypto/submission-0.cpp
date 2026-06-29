class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();

        int low_price = prices[0];

        for(int i=1;i<n;i++){
            if(prices[i] > low_price){
                ans = max(ans, prices[i]-low_price);
            } else {
                low_price = prices[i];
            }
        }

        return ans;
    }
};
