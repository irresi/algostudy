#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define int ll
using ll = long long;
using pii = pair<ll, ll>;
int n,m;
void solve(){
    int i,j;
    cin>>n;
    cout<<n*n*(n+1)/2 - n*(n+1)*(2*n+1)/6;
}
signed main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // int tc; cin>>tc;
    // while(tc--){
        solve();
    return 0;
}