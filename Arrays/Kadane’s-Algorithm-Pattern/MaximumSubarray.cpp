#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int current_sum = nums[0];
    int max_sum = nums[0];

    for(int i = 1; i < nums.size(); i++) {

        current_sum = max(nums[i], current_sum + nums[i]);

        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    cout << "Maximum Subarray Sum = " << max_sum;

    return 0;
}
