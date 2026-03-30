#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void maxSubarraySum(vector<int>& arr){

    int n = arr.size();
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = i; j < n; j++){

            sum += arr[j];

            if(sum > maxSum){
                maxSum = sum;
            }
        }
    }

    cout << "Maximum Sum: " << maxSum;
}

int main(){
	vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = 9;
	
	maxSubarraySum(arr);
}
