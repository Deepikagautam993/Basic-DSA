#include <iostream>
#include <vector>
using namespace std;

int firstRepeating(vector<int>& arr) {

    int n = arr.size();

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                return arr[i];
            }

        }

    }

    return -1;
}

int main() {

    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};

    cout << firstRepeating(arr);

}
