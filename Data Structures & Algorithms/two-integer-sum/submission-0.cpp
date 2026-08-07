class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i  = 0; i < n; i++) {
            int rem = target - nums[i];

            if(map.find(rem) != map.end()) {
                return {map[rem], i};
            }

            if(map.find(nums[i]) == map.end())
                map[nums[i]] = i;
        }

        return {-1, -1};
    }
};
