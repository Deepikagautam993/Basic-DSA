#include <iostream>
using namespace std;

bool linearSearch(int arr[],
                  int size,
                  int index,
                  int target) {

    // Base Case
    if(index == size)
        return false;

    // Self Work
    if(arr[index] == target)
        return true;

    // Recursive Call
    return linearSearch(arr,
                        size,
                        index + 1,
                        target);
}

int main() {

    int arr[] = {4, 8, 1, 6, 9};
    int size = 5;
    int target = 6;

    if(linearSearch(arr, size, 0, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
