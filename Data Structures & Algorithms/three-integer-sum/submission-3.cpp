class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        vector <vector<int>> ans;

        for(int i=0;i<n;i++){
            //skip the duplicate first elements but process it first, (nums[i] == nums[i+1]) would not have worker for (0,0,0)
            if( i>0 && nums[i] == nums[i-1] ){
                continue;
            }
            int target = nums[i]*(-1);

            int low = i+1;
            int high = n-1;

            while(low < high) {
                int sum = nums[low]+nums[high];

                if(sum == target){
                    ans.push_back({nums[i], nums[low], nums[high]});
                    high--;
                    low++;

                    //skip the duplicate second element
                    while(low<high && nums[low] == nums[low-1]){
                        low++;
                    }

                    //the thirs element automatically gets skipped as first and second duplicates are removed
                } else if (sum < target){
                    low++;
                } else {
                    high--;
                }
            }
        }

        return ans;
    }
};
