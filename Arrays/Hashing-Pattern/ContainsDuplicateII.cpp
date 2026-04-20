#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> s;

    for (int i = 0; i < nums.size(); i++) {

        // If already exists ? duplicate within window
        if (s.count(nums[i])) {
            return true;
        }

        s.insert(nums[i]);

        // Maintain window size = k
        if (s.size() > k) {
            s.erase(nums[i - k]);
        }
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    if (containsNearbyDuplicate(nums, k)) {
        cout << "True (Duplicate within k found)";
    } else {
        cout << "False (No such duplicate)";
    }

    return 0;
}
