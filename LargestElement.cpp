#include<iostream>
#include<vector>
using namespace std;

int largest(vector<int>& arr){
    int maxElement = arr[0];
    
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] > maxElement){
        	maxElement = arr[i];
		}
	}
	return maxElement;
}

int main(){
	
	vector<int> arr = {3,7,2,9,5};
	cout << largest(arr) << endl;
}
