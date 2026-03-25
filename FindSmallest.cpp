#include<iostream>
#include<vector>
using namespace std;

int findSmallest(vector<int>& arr,int n){
	
	int smallest = arr[0];
	for(int i=1; i<arr.size(); i++){
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	return smallest;
}

int main(){
	vector<int> arr = {8,3,9,5,2};
	int n = 5;
	cout << findSmallest(arr,n) << endl;
}
