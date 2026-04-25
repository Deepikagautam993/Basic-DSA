#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;

    for(int i = 0; i < n; i++) {
        // Primary diagonal
        sum += mat[i][i];

        // Secondary diagonal
        if(i != n - 1 - i) {
            sum += mat[i][n - 1 - i];
        }
    }

    return sum;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << diagonalSum(mat);

    return 0;
}
