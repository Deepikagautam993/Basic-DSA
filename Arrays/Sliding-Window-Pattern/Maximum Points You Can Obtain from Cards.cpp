#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;

    int n = cardPoints.size();

    int totalSum = 0;
    for (int x : cardPoints) {
        totalSum += x;
    }

    int windowSize = n - k;

    // if taking all cards
    if (windowSize == 0) {
        cout << "Maximum score: " << totalSum;
        return 0;
    }

    int windowSum = 0;

    // first window
    for (int i = 0; i < windowSize; i++) {
        windowSum += cardPoints[i];
    }

    int minSum = windowSum;

    // sliding window
    for (int i = windowSize; i < n; i++) {
        windowSum = windowSum - cardPoints[i - windowSize] + cardPoints[i];

        minSum = min(minSum, windowSum);
    }

    int result = totalSum - minSum;

    cout << "Maximum score: " << result;

    return 0;
}
