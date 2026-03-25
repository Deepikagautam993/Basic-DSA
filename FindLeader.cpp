#include<iostream>
#include<vector>
using namespace std;

int findLeaders(vector<int>& arr,int n){
	
	for(int i=0; i<n; i++){
		
		bool isLeader = true;
		
		for(int j=i+1; j<n; j++){
			
			if(arr[j] > arr[i]){
				
				isLeader = false;
				break;
			}
		}
		if(isLeader){
			cout << arr[i] << " ";
		}
	}
}

int main(){
	vector<int> arr = {16,17,4,3,5,2};
	int n = 6;
	
	findLeaders(arr,n);
	
	return 0;
}
