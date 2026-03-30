#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& arr) {
    int n = arr.size();
    int longest = 1;

    for(int i = 0; i < n; i++) {
        int x = arr[i];
        int count = 1;

        // check next numbers
        while(find(arr.begin(), arr.end(), x + 1) != arr.end()) {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    cout << "Longest consecutive sequence length: "
         << longestConsecutive(arr);

    return 0;
}
