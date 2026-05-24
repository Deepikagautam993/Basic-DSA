#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int arr[],
                      int size,
                      int index,
                      vector<int>& ds,
                      int sum,
                      int target) {

    // Base Case
    if(index == size) {

        if(sum == target) {

            for(int val : ds)
                cout << val << " ";

            cout << endl;
        }

        return;
    }

    // TAKE
    ds.push_back(arr[index]);

    sum += arr[index];

    printSubsequence(arr,
                      size,
                      index + 1,
                      ds,
                      sum,
                      target);

    // BACKTRACK
    sum -= arr[index];

    ds.pop_back();

    // SKIP
    printSubsequence(arr,
                      size,
                      index + 1,
                      ds,
                      sum,
                      target);
}

int main() {

    int arr[] = {1,2,1};

    int size = 3;

    vector<int> ds;

    printSubsequence(arr,
                      size,
                      0,
                      ds,
                      0,
                      2);

    return 0;
}
