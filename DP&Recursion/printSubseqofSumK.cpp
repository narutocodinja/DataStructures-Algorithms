#include <bits/stdc++.h>
using namespace std;

void printSsqK(int ind, vector<int> &ds, int arr[], int n,int sum){
	if(ind == n){
		if(sum >= 4){
			for(auto it : ds){
			cout << it << " ";
			}
			cout << endl;
		}
		return;
	}
	sum += arr[ind];
	ds.push_back(arr[ind]);
	printSsqK(ind + 1,ds,arr,n,sum);
	
	sum -= arr[ind];
	ds.pop_back();
	printSsqK(ind + 1,ds,arr,n,sum);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int arr[] = {3,1,2};
	int n = 3;

	vector<int> ds;

	printSsqK(0,ds,arr,n,0);

	return 0;
}
