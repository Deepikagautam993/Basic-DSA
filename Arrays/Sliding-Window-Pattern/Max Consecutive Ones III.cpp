#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    int left = 0;
    int zeros = 0;
    int maxLen = 0;

    for (int right = 0; right < nums.size(); right++) {

        // count zeros
        if (nums[right] == 0) {
            zeros++;
        }

        // shrink window if zeros exceed k
        while (zeros > k) {
            if (nums[left] == 0) {
                zeros--;
            }
            left++;
        }

        // update maximum length
        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Maximum consecutive ones: " << maxLen;

    return 0;
}
