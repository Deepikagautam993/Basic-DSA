#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    while (i < n) {
        int correct = nums[i];

        if (nums[i] < n && nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);
        } else {
            i++;
        }
    }

    for (int index = 0; index < n; index++) {
        if (nums[index] != index) {
            return index;
        }
    }

    return n;
}

int main() {
    vector<int> nums = {3, 0, 1};

    int result = missingNumber(nums);

    cout << "Missing Number: " << result;

    return 0;
}
