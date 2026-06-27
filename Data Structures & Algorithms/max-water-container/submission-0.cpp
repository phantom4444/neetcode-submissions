class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;

        int n = heights.size();
        int i=0, j=n-1;

        while(i<j){
            int h = min(heights[i], heights[j]);
            int w = j-i;

            ans = max(ans, h*w);

            if(heights[i] < heights[j]){
                i++;
            } else if (heights[i] > heights[j]){
                j--;
            } else {
                i++;
                j--;
            }
        }

        return ans;
    }
};
