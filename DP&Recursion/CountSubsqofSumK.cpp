#include <bits/stdc++.h>
using namespace std;

int printSsqK(int ind, int arr[], int n,int sum){
	if(ind == n){
		if(sum >= 4){
			return 1;
		}
		return 0;
	}
	sum += arr[ind];
	int left = printSsqK(ind + 1,arr,n,sum);

	sum -= arr[ind];
	int right = printSsqK(ind + 1,ds,arr,n,sum);

	return left + right;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int arr[] = {3,1,2};
	int n = 3;

	cout << printSsqK(0,arr,n,0) << endl;;

	return 0;
}
