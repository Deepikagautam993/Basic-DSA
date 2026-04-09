#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int splitArray(vector<int>& nums, int k) {

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while(low < high) {

        int mid = (low + high) / 2;

        int subarrays = 1;
        int currentSum = 0;

        for(int num : nums) {

            if(currentSum + num > mid) {
                subarrays++;
                currentSum = num;
            }
            else {
                currentSum += num;
            }
        }

        if(subarrays <= k)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {

    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;

    int result = splitArray(nums, k);

    cout << "Minimum Largest Sum: " << result << endl;

    return 0;
}
