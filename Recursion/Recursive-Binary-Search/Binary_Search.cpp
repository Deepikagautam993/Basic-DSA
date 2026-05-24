#include <iostream>
using namespace std;

bool binarySearch(int arr[],
                  int start,
                  int end,
                  int target) {

    // Base Case
    if(start > end)
        return false;

    // Find Mid
    int mid = start + (end - start) / 2;

    // Found
    if(arr[mid] == target)
        return true;

    // Left Half
    if(target < arr[mid]) {

        return binarySearch(arr,
                            start,
                            mid - 1,
                            target);
    }

    // Right Half
    return binarySearch(arr,
                        mid + 1,
                        end,
                        target);
}

int main() {

    int arr[] = {1,3,5,7,9,11};
    int size = 6;

    int target = 7;

    if(binarySearch(arr,0,size-1,target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
