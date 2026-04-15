#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    int k = 3;

    int n = nums.size();
    vector<int> result(n, -1);

    int windowSize = 2 * k + 1;
    long long windowSum = 0;

    // if window size greater than array
    if (windowSize > n) {
        for (int x : result) {
            cout << x << " ";
        }
        return 0;
    }

    // first window sum
    for (int i = 0; i < windowSize; i++) {
        windowSum += nums[i];
    }

    // first valid index
    result[k] = windowSum / windowSize;

    // slide window
    for (int i = windowSize; i < n; i++) {
        windowSum = windowSum - nums[i - windowSize] + nums[i];
        result[i - k] = windowSum / windowSize;
    }

    // print result
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
