//just maintain the left side of the window and calculate the answer by storing the last position of the elements seen
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans=0;
        int left=0;

        vector <int> last_pos (256, -1);

        for(int i=0;i<n;i++){
            if(last_pos[s[i]] != -1){
                left = max (left, last_pos[s[i]]+1);
            }

            ans = max (ans, i-left+1);
            last_pos[s[i]] = i;
        }

        return ans;
    }
};
