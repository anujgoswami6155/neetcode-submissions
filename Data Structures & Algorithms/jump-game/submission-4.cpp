class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return true;
        if(nums[0] == 0) return false;

        int reachable = nums[0];
        for(int i = 0; i < n; i++) {
            if(reachable >= n - 1) {
                return true;
            }

            if(reachable < i) {
                return false;
            }

            reachable = max(reachable, i + nums[i]);
        }

        return false;
    }
};
