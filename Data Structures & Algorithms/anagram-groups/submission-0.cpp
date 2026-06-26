class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector <int> alpha(26, 0);

        map < vector<int>, vector<string> > mp;

        for(int i=0;i<n;i++){
            fill(alpha.begin(), alpha.end(), 0);

            string s = strs[i];
            int m = s.size();
            for(int j=0;j<m;j++){
                alpha[s[j]-'a']++;
            }

            mp[alpha].push_back(s);
        }

        vector <vector<string>> ans;

        for (auto i = mp.begin(); i!=mp.end(); i++){
            ans.push_back(i->second);
        }

        return ans;

    }
};
