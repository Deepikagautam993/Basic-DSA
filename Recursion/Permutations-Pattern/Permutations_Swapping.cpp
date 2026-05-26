#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums,
           int index,
           vector<vector<int>>& ans) {

    // Base Case
    if(index == nums.size()) {

        ans.push_back(nums);
        return;
    }

    // Try every choice
    for(int i = index;
        i < nums.size();
        i++) {

        // SWAP
        swap(nums[index],
             nums[i]);

        // Recursive Call
        solve(nums,
              index + 1,
              ans);

        // BACKTRACK
        swap(nums[index],
             nums[i]);
    }
}

int main() {

    vector<int> nums = {1,2,3};

    vector<vector<int>> ans;

    solve(nums,
          0,
          ans);

    // Print answer
    for(auto vec : ans) {

        cout << "[ ";

        for(int val : vec)
            cout << val << " ";

        cout << "]" << endl;
    }

    return 0;
}
