#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    int n = nums.size();

    // Step 1: Build prefix array
    vector<int> prefix(n + 1);

    prefix[0] = 0;

    for(int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }

    // Example queries
    int left1 = 0, right1 = 2;
    int left2 = 2, right2 = 5;
    int left3 = 0, right3 = 5;

    int result1 = prefix[right1 + 1] - prefix[left1];
    int result2 = prefix[right2 + 1] - prefix[left2];
    int result3 = prefix[right3 + 1] - prefix[left3];

    cout << "Sum(0,2) = " << result1 << endl;
    cout << "Sum(2,5) = " << result2 << endl;
    cout << "Sum(0,5) = " << result3 << endl;

    return 0;
}
