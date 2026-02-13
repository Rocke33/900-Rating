#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
 ll n; cin>>n;
 vector<ll> a(n);
 ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum-(2*a[n-2])<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}