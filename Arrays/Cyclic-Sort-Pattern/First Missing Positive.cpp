#include <iostream>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    while (i < n) {

        // SAFE condition (prevents runtime error)
        if (nums[i] > 0 &&
            nums[i] <= n &&
            nums[i] != nums[nums[i] - 1]) {

            swap(nums[i], nums[nums[i] - 1]);
        }
        else {
            i++;
        }
    }

    // Find first missing positive
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    vector<int> nums = {3, 4, -1, 1};

    int result = firstMissingPositive(nums);

    cout << "First Missing Positive: " << result << endl;

    return 0;
}
