class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) return true;

        sort(intervals.begin(), intervals.end(),
             [](const Interval& a, const Interval& b) {
                 return a.start < b.start;
             });

        int end_interval = intervals[0].end;

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i].start >= end_interval) {
                end_interval = intervals[i].end;
            } else {
                return false;
            }
        }

        return true;
    }
};