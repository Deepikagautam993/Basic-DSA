#include<iostream>
#include<vector>
using namespace std;

void findMaxMin(vector<int>& arr,int n){
	
	int maximum = arr[0];
	int minimum = arr[0];
	
	for(int i=1; i<arr.size(); i++){
		if(arr[i] < minimum){
			minimum = arr[i];
		}
		if(arr[i] > maximum){
			maximum = arr[i];
		}
	}
	cout << "Maximum Element " << maximum << endl;
	cout << "Minimum Element " << minimum << endl;
}

int main(){
	vector<int> arr = {7,2,9,4,1};
	int n = 5;
	
	findMaxMin(arr,n);
}
