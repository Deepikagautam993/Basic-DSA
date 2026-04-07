#include <iostream>
#include <vector>
using namespace std;

void sortColorsII(vector<int>& nums, int k) {
    int count[k+1] = {0}; // colors 1..k

    // Step 1: Count frequencies
    for(int i = 0; i < nums.size(); i++)
        count[nums[i]]++;

    // Step 2: Overwrite original array
    int index = 0;
    for(int color = 1; color <= k; color++){
        for(int j = 0; j < count[color]; j++)
            nums[index++] = color;
    }
}

int main() {
    vector<int> nums = {3,2,2,1,4,3,1};
    int k = 4;

    sortColorsII(nums, k);

    for(int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}
