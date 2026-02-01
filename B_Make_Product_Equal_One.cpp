#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
ll n; cin>>n;
vector<ll> a(n);
ll coins=0,zero=0,minus=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==0) zero++;
    else if(a[i]<0) minus++;
    coins+=abs(abs(a[i])-1);
  }
  if(minus%2==1 && zero==0) coins+=2;
  cout<<coins<<endl;
}

int main() {
    
        rocke();
    return 0;
}