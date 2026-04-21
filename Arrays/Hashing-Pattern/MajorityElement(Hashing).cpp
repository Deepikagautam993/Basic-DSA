#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> freq;

    for(int num : nums) {
        freq[num]++;

        if(freq[num] > nums.size() / 2) {
            return num;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElement(nums);

    cout << "Majority Element: " << ans;

    return 0;
}
