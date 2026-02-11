#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
 ll n,x; cin>>n>>x;
  for(ll i=0;i<n;i++){
     if(x!=i)cout<<i<<" ";
  }
  if(x==n){ cout<<endl; return;}
  cout<<x<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}