#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int tc = 0;
    while(T--){
        tc++;
        int n,m;
        cin >> n >> m;
        
        long long TotalCandies = 0;
        for(int i = 0; i < n;i++){
            int temp;
            cin >> temp;
            TotalCandies+= (temp%m);
        }
        int res = TotalCandies % m;
        cout << "Case #"<< tc << ": " << res << "\n";
    }
    return 0;
}
