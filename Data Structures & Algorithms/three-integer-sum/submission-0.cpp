class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        set < vector<int> > s;

        for(int i=0;i<n;i++){
            int target = nums[i]*(-1);

            int low = i+1;
            int high = n-1;

            while(low < high) {
                int sum = nums[low]+nums[high];

                if(sum == target){
                    s.insert({nums[i], nums[low], nums[high]});
                    high--;
                    low++;
                } else if (sum < target){
                    low++;
                } else {
                    high--;
                }
            }
        }

        vector <vector<int>> ans; 

        for (auto &v: s){
            ans.push_back(v);
        }

        return ans;
    }
};
