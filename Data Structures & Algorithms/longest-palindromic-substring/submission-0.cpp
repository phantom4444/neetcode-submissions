class Solution {
public:
    bool isPalindrome(string s, int i, int j ){
            while(i<=j){
                if(s[i] != s[j]){
                    return false;
                }

                i++;
                j--;
            }
            return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int longestLen = 0;


        string ans;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (isPalindrome(s, i, j)){
                    if(longestLen < j-i+1){
                        ans="";
                        for(int k=i;k<=j;k++){
                            ans+=s[k];
                        }
                        longestLen = j-i+1;
                    }
                }
            }
        }

        return ans;
    }
};
