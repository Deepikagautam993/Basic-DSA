#include <iostream>
#include <vector>
using namespace std;

int countSubsequence(int arr[],
                     int size,
                     int index,
                     int sum,
                     int target) {

    // Base Case
    if(index == size) {

        if(sum == target)
            return 1;

        return 0;
    }

    // TAKE
    int take = countSubsequence(arr,
                                size,
                                index + 1,
                                sum + arr[index],
                                target);

    // SKIP
    int skip = countSubsequence(arr,
                                size,
                                index + 1,
                                sum,
                                target);

    // Total Count
    return take + skip;
}

int main() {

    int arr[] = {1,2,1};

    int size = 3;

    int ans = countSubsequence(arr,
                               size,
                               0,
                               0,
                               2);

    cout << ans;

    return 0;
}
