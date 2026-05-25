#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums,
                     int index,
                     vector<int>& ds,
                     vector<vector<int>>& ans) {

    // Base Case
    if(index == nums.size()) {

        ans.push_back(ds);
        return;
    }

    // TAKE
    ds.push_back(nums[index]);

    generateSubsets(nums,
                    index + 1,
                    ds,
                    ans);

    // BACKTRACK
    ds.pop_back();

    // SKIP
    generateSubsets(nums,
                    index + 1,
                    ds,
                    ans);
}

int main() {

    vector<int> nums = {1,2,3};

    vector<int> ds;

    vector<vector<int>> ans;

    generateSubsets(nums,
                    0,
                    ds,
                    ans);

    for(auto subset : ans) {

        cout << "[ ";

        for(int val : subset)
            cout << val << " ";

        cout << "]" << endl;
    }

    return 0;
}
