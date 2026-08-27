class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mxsum = INT_MIN;
        int mse = 0;

        for(int i = 0; i < n; i++) {
            mse += nums[i];

            mxsum = max(mxsum, mse);

            if(mse < 0) {
                mse = 0;
            }
        }

        return mxsum;
    }
};
