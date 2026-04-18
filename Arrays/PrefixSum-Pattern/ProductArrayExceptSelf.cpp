#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();

    vector<int> answer(n);

    answer[0] = 1;

    for(int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int right = 1;

    for(int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    for(int num : answer) {
        cout << num << " ";
    }

    return 0;
}
