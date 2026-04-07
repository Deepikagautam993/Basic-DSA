#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
    // Sort points by distance squared
    sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
        return a[0]*a[0] + a[1]*a[1] < b[0]*b[0] + b[1]*b[1];
    });
    
    // Return first K points
    vector<vector<int>> result(points.begin(), points.begin() + K);
    return result;
}

int main() {
    vector<vector<int>> points = {{1,3},{-2,2},{2,-2}};
    int K = 2;
    vector<vector<int>> res = kClosest(points, K);
    
    cout << "K Closest Points:" << endl;
    for(auto &p : res)
        cout << "[" << p[0] << "," << p[1] << "]" << endl;
        
    return 0;
}
