#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        if(arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
}

int main() {

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    findDuplicates(arr, n);

    return 0;
}
