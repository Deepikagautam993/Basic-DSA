#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int>& nums,
           int index,
           int target,
           vector<int>& ds,
           vector<vector<int>>& ans) {

    // Base Case
    if(target == 0) {

        ans.push_back(ds);
        return;
    }

    for(int i = index;
        i < nums.size();
        i++) {

        // Skip duplicates
        if(i > index &&
           nums[i] == nums[i - 1]) {

            continue;
        }

        // Pruning
        if(nums[i] > target)
            break;

        // TAKE
        ds.push_back(nums[i]);

        // Move ahead
        solve(nums,
              i + 1,
              target - nums[i],
              ds,
              ans);

        // BACKTRACK
        ds.pop_back();
    }
}

int main() {

    vector<int> nums =
    {10,1,2,7,6,1,5};

    int target = 8;

    // Sort array
    sort(nums.begin(),
         nums.end());

    vector<int> ds;

    vector<vector<int>> ans;

    solve(nums,
          0,
          target,
          ds,
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
