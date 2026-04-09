#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>    // ceil ke liye
using namespace std;


bool canFinish(const vector<int>& piles, int k, int H) {
    int hours = 0;
    for(int pile : piles) {
        hours += ceil((double)pile / k);
    }
    return hours <= H;
}

// Function to find minimum eating speed
int minEatingSpeed(const vector<int>& piles, int H) {

    int low = 1;  // Minimum speed
    int high = *max_element(piles.begin(), piles.end());  // Maximum speed

    while(low < high) {
        int mid = (low + high) / 2;

        if(canFinish(piles, mid, H))
            high = mid;   // try smaller speed
        else
            low = mid + 1;  // need larger speed
    }

    return low;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int H = 8;

    int result = minEatingSpeed(piles, H);

    cout << "Minimum Eating Speed: " << result << endl;

    return 0;
}
