#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());
    int n = citations.size();
    int h = 0;

    for(int i = 0; i < n; i++){
        int h_candidate = n - i;  
        if(citations[i] >= h_candidate){
            h = h_candidate;      
            break;                
        }
    }

    return h;
}

int main() {
    vector<int> citations = {3,0,6,1,5};
    cout << "H-Index: " << hIndex(citations) << endl; 
    return 0;
}
