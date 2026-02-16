#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
      ll n; cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n;i++){
            if(abs(a[i]-a[0])%2==1) {cout<<"NO"<<endl; return;};
        }
        cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}