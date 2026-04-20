#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;

    // Step 1: count frequency
    for(int num : nums) {
        freq[num]++;
    }

    // Step 2: find element with freq = 1
    for(auto it : freq) {
        if(it.second == 1) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    int ans = singleNumber(nums);

    cout << "Single Number is: " << ans;

    return 0;
}
