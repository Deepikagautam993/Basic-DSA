#include<iostream>
#include<vector>
using namespace std;

int largestAltitude(vector<int>& gain){
	
	int current = 0 ; 
	int maxAlt = 0;
	
	for(int i=0; i<gain.size(); i++){
		
		current = current + gain[i];
		if(current > maxAlt){
			maxAlt = current;
		}
	}
	return maxAlt;
}

int main(){
	vector<int> gain = {-5, 1, 5, 0, -7};
	cout << largestAltitude(gain) << endl;
}
