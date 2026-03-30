#include<iostream>
#include<vector>
using namespace std;

int findDifference(vector<int>& arr,int n){
	
	int maximum = arr[0];
	int minimum = arr[0];
	
	for(int i=1; i<arr.size(); i++){
		
		if(arr[i] > maximum){
			maximum = arr[i];
		}
		
		if(arr[i] < minimum){
			minimum = arr[i];
		}	
	}
	int difference = maximum - minimum;
	
	return difference;
}

int main(){
	vector<int> arr = {7,2,9,4,1};
	int n = 5;
	
	int result = findDifference(arr,n);
	
	cout << "Difference between Maximum and Minimum : " << result;
	
	return 0;
}
