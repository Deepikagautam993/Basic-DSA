#include <iostream>
#include <vector>
using namespace std;

void rearrange(vector<int>& arr) {

    int n = arr.size();

    int posIndex = 0;
    int negIndex = 1;

    while(posIndex < n && negIndex < n) {

        if(arr[posIndex] >= 0) {
            posIndex += 2;
        }
        else if(arr[negIndex] < 0) {
            negIndex += 2;
        }
        else {
            swap(arr[posIndex], arr[negIndex]);
        }
    }
}

int main() {

    vector<int> arr = {1, 2, -4, -5};

    rearrange(arr);

    for(int x : arr)
        cout << x << " ";
}
