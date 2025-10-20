#include <bits/stdc++.h>
using namespace std;

void ex61(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,W; if(!(cin>>n>>W)) { cout<<\"Provide n W then weights and values\\n\"; return; }
    vector<int>w(n),v(n);
    for(int i=0;i<n;i++) cin>>w[i]>>v[i];
    vector<int>dp(W+1,0);
    for(int i=0;i<n;i++){
        for(int x=W;x>=w[i];x--) dp[x]=max(dp[x], dp[x-w[i]]+v[i]);
    }
    cout<<dp[W]<<'\\n';
}

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr); ex61(); return 0; }
