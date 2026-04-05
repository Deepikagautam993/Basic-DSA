#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

    vector<int> result;

    for(int i = 0; i < arr2.size(); i++) {

        for(int j = 0; j < arr1.size(); j++) {

            if(arr1[j] == arr2[i]) {
                result.push_back(arr1[j]);
                arr1[j] = -1;
            }
        }
    }

    sort(arr1.begin(), arr1.end());

    for(int i = 0; i < arr1.size(); i++) {

        if(arr1[i] != -1) {
            result.push_back(arr1[i]);
        }
    }

    return result;
}

int main(){
	vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
	vector<int> arr2 = {2,1,4,3,9,6};
	
	vector<int> result = relativeSortArray(arr1,arr2);
	
	for(int num : result){
		cout << num << " ";
	}
}
