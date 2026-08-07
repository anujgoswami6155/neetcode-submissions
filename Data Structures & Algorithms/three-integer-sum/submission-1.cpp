class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums), end(nums));

        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int low = i + 1;
            int high = n - 1;
            while (low < high) {
                int sum = nums[low] + nums[high] + nums[i];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[low], nums[high]});

                    while (low < n - 1 && nums[low] == nums[low + 1]) {
                        low++;
                    }

                    while (high > 0 && nums[high] == nums[high - 1]) {
                        high--;
                    }

                    low = low + 1;
                    high = high - 1;
                } else if (sum > 0) {
                    high--;
                } else {
                    low++;
                }
            }
        }

        return ans;
    }
};
