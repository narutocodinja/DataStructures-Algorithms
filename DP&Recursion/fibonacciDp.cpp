#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp){ // memoization
	if(n <= 1) return n;

	if(dp[n] != -1) return dp[n];
	return dp[n] = f(n-1, dp) + f(n-2,dp);
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	// vector<int> dp(n+1, -1);
	// cout << f(n, dp);
  
  // space optimized after tabulation
	
	int prev2 = 0, prev = 1;
	for(int i = 2; i <= n; i++){
		int curi = prev + prev2;
		prev2 = prev;
		prev = curi;
	}
	cout << prev;
	return 0;

}
