#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {9, 4, 2, 10, 7, 8, 8, 1, 9};

    int n = arr.size();

    if (n == 1) {
        cout << "Longest Turbulent Subarray Length: 1";
        return 0;
    }

    int left = 0;
    int maxLen = 1;

    for (int right = 1; right < n; right++) {

        int cmp = 0;

        if (arr[right] > arr[right - 1]) {
            cmp = 1;
        }
        else if (arr[right] < arr[right - 1]) {
            cmp = -1;
        }
        else {
            cmp = 0;
        }

        if (cmp == 0) {
            left = right;
        }
        else if (right == n - 1 || cmp * ( (arr[right + 1] > arr[right]) ? 1 :
                        (arr[right + 1] < arr[right]) ? -1 : 0 ) != -1) {

            maxLen = max(maxLen, right - left + 1);
            left = right;
        }
    }

    cout << "Longest Turbulent Subarray Length: " << maxLen;

    return 0;
}
