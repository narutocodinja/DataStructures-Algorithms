#include <bits/stdc++.h>
using namespace std;

void printSsq(int ind, vector<int> &ds, int arr[],int n){
	if(ind == n){
		for(auto it : ds){
			cout << it << " ";
		}
		if(ds.size() == 0) cout << "{}";
		cout << endl;
		return;
	}

	ds.push_back(arr[ind]);
	printSsq(ind + 1, ds, arr, n);
	ds.pop_back();
	printSsq(ind+1, ds, arr, n);
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int arr[] = {3,1,2};
	int n = 3;

	vector<int> ds;

	printSsq(0,ds,arr,n);

	return 0;
}