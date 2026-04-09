#include <iostream>
#include <vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while(low < high) {
        int mid = (low + high) / 2;
        if(arr[mid] < arr[mid + 1])
            low = mid + 1; 
        else
            high = mid;    
    }

    return low; 
}

int main() {
    vector<int> arr = {0, 2, 4, 6, 5, 3, 1};

    int peakIndex = peakIndexInMountainArray(arr);

    cout << "Peak index is: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;

    return 0;
}
