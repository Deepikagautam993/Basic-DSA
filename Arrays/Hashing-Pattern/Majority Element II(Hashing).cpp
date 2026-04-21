#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int, int> freq;
    vector<int> result;

    int n = nums.size();

    for(int num : nums) {
        freq[num]++;
    }

    for(auto it : freq) {
        if(it.second > n / 3) {
            result.push_back(it.first);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};

    vector<int> ans = majorityElement(nums);

    cout << "Majority Elements: ";
    for(int num : ans) {
        cout << num << " ";
    }

    return 0;
}
