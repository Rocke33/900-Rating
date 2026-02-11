#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll n,m,k; cin>>n>>m>>k;
  ll mx_c=n/m;
  if(n%m!=0) mx_c++;
  ll htc=n-mx_c;
  if(htc<=k) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}