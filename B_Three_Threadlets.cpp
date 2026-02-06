#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll a,b,c; cin>>a>>b>>c;
  ll mx=max({a,b,c}),mn=min({a,b,c});
  ll mid=a+b+c-mx-mn;
  ll cut=0;
  if(mx%mn==0){
     cut=cut+(mx/mn-1);
  }
  else {
    cout<<"NO"<<endl;
    return;
  }
  if(mid%mn==0){
     cut=cut+(mid/mn-1);
  }
  else {
    cout<<"NO"<<endl;
    return;
   }
   if(cut<=3) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}