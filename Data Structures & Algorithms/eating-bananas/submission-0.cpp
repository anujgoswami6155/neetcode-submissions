class Solution {
public:
    bool check(int mid, vector<int>& piles, int h) {
        int hours = 0;

        for(int i = 0; i < piles.size(); i++) {
            int time = (piles[i] + mid - 1)/mid;
            hours += time;

            if(hours > h) return false;
        }

        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;

        for(auto p : piles) {
            high = max(high, p);
        }

        while(low <= high) {
            int mid = low + (high - low)/2;

            if(check(mid, piles, h)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};
