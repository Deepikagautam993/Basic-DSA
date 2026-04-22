#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    while (i < n) {
        int correct = nums[i] - 1;

        if (nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);
        } else {
            i++;
        }
    }

    for (int index = 0; index < n; index++) {
        if (nums[index] != index + 1) {
            return {nums[index], index + 1};
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> nums = {1, 2, 2, 4};

    vector<int> result = findErrorNums(nums);

    cout << "Duplicate: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
