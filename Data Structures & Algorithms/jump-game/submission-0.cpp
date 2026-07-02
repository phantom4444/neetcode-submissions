class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int goal = n-1;

        for(int i=n-2;i>=0;i--){
            int x = nums[i]+i;

            if( x>= goal){
                goal = i;
            }
        }

        if(goal == 0) return true;
        else return false;
    }
};
