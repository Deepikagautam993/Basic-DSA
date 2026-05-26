#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row,
            int col,
            vector<string>& board,
            int n) {

    int r = row;
    int c = col;

    // Upper diagonal
    while(r >= 0 && c >= 0) {

        if(board[r][c] == 'Q')
            return false;

        r--;
        c--;
    }

    r = row;
    c = col;

    // Same column
    while(r >= 0) {

        if(board[r][c] == 'Q')
            return false;

        r--;
    }

    r = row;
    c = col;

    // Upper right diagonal
    while(r >= 0 && c < n) {

        if(board[r][c] == 'Q')
            return false;

        r--;
        c++;
    }

    return true;
}

void solve(int row,
           vector<string>& board,
           vector<vector<string>>& ans,
           int n) {

    // Base Case
    if(row == n) {

        ans.push_back(board);
        return;
    }

    // Try every column
    for(int col = 0;
        col < n;
        col++) {

        // Safe position
        if(isSafe(row,
                  col,
                  board,
                  n)) {

            // PLACE
            board[row][col] = 'Q';

            solve(row + 1,
                  board,
                  ans,
                  n);

            // BACKTRACK
            board[row][col] = '.';
        }
    }
}

int main() {

    int n = 4;

    vector<string> board(
        n,
        string(n,'.'));

    vector<vector<string>> ans;

    solve(0,
          board,
          ans,
          n);

    // Print answers
    for(auto solution : ans) {

        cout << endl;

        for(auto row : solution) {
            cout << row << endl;
        }

        cout << endl;
    }

    return 0;
}
