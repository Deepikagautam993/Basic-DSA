#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {

    int j = 0;

    for(int i = 0; i < nums.size(); i++) {

        if(nums[i] % 2 == 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

    return nums;
}

int main(){
	vector<int> nums = {3, 5, 7, 2};
	vector<int> result = sortArrayByParity(nums);
	
	for(int num : result){
		cout << num << " ";
	}
}
