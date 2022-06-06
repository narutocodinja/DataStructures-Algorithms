#include <bits/stdc++.h>
using namespace std;


int f(int ind, vector<int> &heights, vector<int> &dp){ // memoization
	if(ind == 0) return 0;

	if(dp[ind] != -1) return dp[ind];
	int left = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind-1]);
	int right = INT_MAX;
	if(ind > 1) right = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind-2]);

	return dp[ind] = min(left, right);
}


int frogjump(int n, vector<int> &heights){ // tabulation
	vector<int> dp(n, 0);
	// return f(n-1,heights,dp);
	// tabulation method below
	dp[0] = 0;

	for(int ind = 1; ind < n; ind++){
		int fs = dp[ind-1] + abs(heights[ind] - heights[ind-1]);
		int ss = INT_MAX;
		if(ind > 1) ss = dp[ind-2] + abs(heights[ind] - heights[ind-2]);
		dp[ind] = min(fs,ss);
	}
	return dp[n-1];	
}

int frogjump2(int n, vector<int> &heights){
	int prev2 = 0, prev = 0;

	for(int i = 1; i < n; i++){
		int fs = prev + abs(heights[i] - heights[i-1]);
		int ss = INT_MAX;
		if(i > 1){
			ss = prev2 + abs(heights[i] - heights[i-2]);
		}
		int cur = min(fs,ss);
		prev2 = prev;
		prev = cur;
	}
	return prev;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	n = 6;
	vector<int> heights = {30,10,60,10,60,50};

	cout << frogjump2(n,heights);
	return 0;
}