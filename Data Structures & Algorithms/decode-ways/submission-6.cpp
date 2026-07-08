class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        if(s[0]=='0')
            return 0;

        vector <int> dp(n,0);
        dp[0] = 1;
        for(int i=1;i<n;i++){

            if(s[i] == '0'){
                if (s[i-1] > '2' || s[i-1] == '0'){
                    return 0;
                } else {
                    if( i<= 1){
                        dp[i] = 1;
                    } else {
                        dp[i] = dp[i-2];
                    }
                }
            } else {
                if( s[i-1] == '1' || (s[i-1] == '2' && s[i] < '7')){
                    if(i>=2)
                        dp[i] = dp[i-2]+dp[i-1];
                    else
                        dp[i] = 2;
                }else {
                    dp[i] = dp[i-1];
                }
            }
        }
        return dp[n-1];
    }
};
