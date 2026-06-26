class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map <int, int> mp;

        int i=0;
        while(i<n){
            if(mp.find(nums[i]) != mp.end()){
                return true;
            }

            mp[nums[i]] = 1;
            i++;
        }

        return false;
    }
};