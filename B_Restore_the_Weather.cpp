#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
 ll n,k; cin>>n>>k;
   vector<pair<ll,ll>> a(n);
   for(ll i=0;i<n;i++){
       cin>>a[i].first;
       a[i].second=i;
   }
   vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<ll> ans(n);
    for (ll i=0;i<n;i++){
        ans[a[i].second]=b[i];
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}