class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n % groupSize != 0) return false;
        map<int, int> mp;

        for(auto h : hand) {
            mp[h]++;
        }

        while(!mp.empty()) {
            int value = mp.begin()->first;

            for(int val = value; val < value + groupSize; val++) {
                auto it = mp.find(val);
                if(it == mp.end()) {
                    return false;
                }

                it->second--;
                if(it->second == 0) {
                    mp.erase(it->first);
                }
            }
        }

        return true;
    }
};
