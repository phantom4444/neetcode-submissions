class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        set <int> s;

        for(int i=0;i<n;i++){
            int x = nums[i];
            if(s.find(x)!= s.end())
            return true;

            s.insert(x);
        }
        return false;
    }
};
