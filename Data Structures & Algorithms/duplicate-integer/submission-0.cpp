class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for(auto num: nums) {
            if(freq.find(num) != freq.end()) return true;

            freq[num]++;
        }

        return false;
    }
};