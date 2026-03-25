#include <iostream>
#include<vector>
using namespace std;

int firstRepeating(vector<int>& arr, int n) {

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }

    return -1; // No repeating element
}

int main() {

    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    int result = firstRepeating(arr, n);

    if(result != -1)
        cout << "First repeating element: " << result;
    else
        cout << "No repeating element";

    return 0;
}
