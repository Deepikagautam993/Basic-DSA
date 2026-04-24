#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total = 0;
    int tank = 0;
    int start = 0;

    for(int i = 0; i < gas.size(); i++) {
        int diff = gas[i] - cost[i];

        total += diff;
        tank += diff;

        if(tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }

    if(total >= 0)
        return start;

    return -1;
}

int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int result = canCompleteCircuit(gas, cost);

    cout << "Starting index: " << result;

    return 0;
}
