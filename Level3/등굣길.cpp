#include <bits/stdc++.h>
using namespace std;
const int MOD= 1000000007;

int solution(int m, int n, vector<vector<int>> pud) {
    vector<vector<int>> dp(n+1,vector<int>(m+1,0)); dp[1][1]=1;
    for(auto& e:pud) dp[e[1]][e[0]]=-1;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            if(dp[i][j]==-1) dp[i][j]=0;
            else dp[i][j]+=(dp[i-1][j]+dp[i][j-1])%MOD;
    return dp[n][m]%MOD;
}