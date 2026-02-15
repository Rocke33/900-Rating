#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll n,m,k; cin>>n>>m>>k;
    ll ans=0;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll x;
    for(ll i=0;i<m;i++){
        cin>>x;
        for(ll j=0;j<n;j++){
            if(a[j]+x<=k) ans++;
        }
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}