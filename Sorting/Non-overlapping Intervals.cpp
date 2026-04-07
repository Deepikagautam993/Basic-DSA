#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if(intervals.size() == 0) return 0;

    // Step 1: sort by end time
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });

    int count = 0;
    int end = INT_MIN;

    // Step 2: pick non-overlapping intervals
    for(int i = 0; i < intervals.size(); i++){
        if(intervals[i][0] >= end){
            end = intervals[i][1];
            count++;
        }
    }

    // Step 3: intervals to remove = total - count
    return intervals.size() - count;
}

int main() {
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
    cout << "Minimum intervals to remove: " << eraseOverlapIntervals(intervals) << endl;
    return 0;
}
