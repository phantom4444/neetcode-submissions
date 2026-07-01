class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();

        vector <int> ans;
        stack < pair<int,int> > st;

        ans.push_back(0);
        st.push({t[n-1], n-1});

        for(int i=n-2;i>=0;i--){
            while( (!st.empty()) && t[i] >= st.top().first){
                st.pop();
            }

            if(!st.empty()){
                ans.push_back(st.top().second - i);
            } else {
                ans.push_back(0);
            }

            st.push({t[i], i});
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
