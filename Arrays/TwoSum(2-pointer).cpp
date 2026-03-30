#include <iostream>
#include <vector>
using namespace std;

void twoSumSorted(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            cout << arr[left] << " and " << arr[right];
            return;
        }
        else if(sum < target)
            left++;
        else
            right--;
    }

    cout << "No pair found";
}

int main(){
	vector<int> arr = {2,7,11,15};
	int target = 9;
	
	twoSumSorted(arr,target);
}
