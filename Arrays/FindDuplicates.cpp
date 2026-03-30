#include<iostream>
#include<vector>
using namespace std;

void findDuplicates(vector<int>& arr, int n){
	
	for(int i=0; i<n; i++){
		
		for(int j=i+1; j<n; j++){
			
			if(arr[i] == arr[j]){
				cout << arr[i] << " ";
				break; 
			}
		}
	}
}
int main(){
	vector<int> arr = {1,2,3,2,4,1};
	int n = 6;
	
	findDuplicates(arr,n);
	
	return 0;
}
