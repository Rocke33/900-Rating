#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
ll n; cin>>n;
vector<ll> a(n);
for(ll i=0;i<n;i++){
    cin>>a[i];
 }
 ll mx=*max_element(a.begin(),a.end());
  if(a[0]!=mx){
     for(ll i=1;i<n;i++){
        if(a[i]==mx){
            cout<<i+1<<endl;
            return;
        }
     }
  }
  for(ll i=1;i<n;i++){
    if(a[i]!=mx){
         cout<<i<<endl;
         return;
    }
  }
 cout<<-1<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}