class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for(auto s : strs) {
            string str = s;
            sort(str.begin(), str.end());
            map[str].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto mp : map) {
            ans.push_back(mp.second);
        }

        return ans;
    }
};
