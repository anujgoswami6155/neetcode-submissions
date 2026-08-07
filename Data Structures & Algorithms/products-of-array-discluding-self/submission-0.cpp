class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n , 1);
        vector<int> suff(n, 1);

        int mul = nums[0];
        for(int i = 1; i < n; i++) {
            pref[i] *= mul;
            mul *= nums[i];
        }

        mul = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suff[i] = mul;
            mul *= nums[i];
        }

        vector<int> ans(n);
        for(int i = 0 ; i < n; i++) {
            ans[i] = pref[i] * suff[i];
        }

        return ans;
    }
};
