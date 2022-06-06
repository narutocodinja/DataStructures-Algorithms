#include <bits/stdc++.h>
using namespace std;


int f(int n){
	if(n == 0) return 1;
	if(n == 1) return 1;

	int left = f(n-1);
	int right = f(n-2);

	return left + right;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;

	cout << f(n);

	return 0;
}
