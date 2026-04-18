#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {3, 0, 1, 4, 2},
        {5, 6, 3, 2, 1},
        {1, 2, 0, 1, 5},
        {4, 1, 0, 1, 7},
        {1, 0, 3, 0, 5}
    };

    int m = matrix.size();
    int n = matrix[0].size();

    // Create prefix matrix
    vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));

    // Build prefix sum
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            prefix[i][j] = matrix[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    // Query example
    int row1 = 2, col1 = 1;
    int row2 = 4, col2 = 3;

    int result = prefix[row2+1][col2+1] - prefix[row1][col2+1] - prefix[row2+1][col1]
        + prefix[row1][col1];

    cout << "Sum = " << result << endl;

    return 0;
}
