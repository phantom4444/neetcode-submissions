class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map < int, int > mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector < vector<int> > bucket(n+1);

        for( auto &p : mp){
            bucket[p.second].push_back(p.first);
        }

        vector <int> ans;

        for(int i=n; i>=1 && ans.size()<k; i--){
            for(int num: bucket[i]){
                ans.push_back(num);

                if(ans.size() == k)
                return ans;
            }
        }

        return ans;
    }
};
