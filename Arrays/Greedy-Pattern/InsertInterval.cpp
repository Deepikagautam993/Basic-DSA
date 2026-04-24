#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insertInterval(
    vector<vector<int>>& intervals,
    vector<int>& newInterval) {

    vector<vector<int>> result;

    int i = 0;
    int n = intervals.size();

    // Step 1
    while(i < n &&
        intervals[i][1] < newInterval[0]) {

        result.push_back(intervals[i]);
        i++;
    }

    // Step 2
    while(i < n &&
        intervals[i][0] <= newInterval[1]) {

        newInterval[0] = min(newInterval[0], intervals[i][0]);

        newInterval[1] = max(newInterval[1], intervals[i][1]);

        i++;
    }

    result.push_back(newInterval);

    // Step 3
    while(i < n) {
        result.push_back(intervals[i]);
        i++;
    }

    return result;
}

int main() {

    vector<vector<int>> intervals = {
        {1,3},
        {6,9}
    };

    vector<int> newInterval = {2,5};

    vector<vector<int>> ans = insertInterval(intervals, newInterval);

    cout << "Intervals after insertion:\n";

    for(auto v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }

    return 0;
}
