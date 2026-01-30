#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
 ll n; cin>>n;
 ll a[n][n];
 ll sum=0;
 vector<ll> v;
 for(ll i=0;i<n;i++){
     for(ll j=0;j<n;j++){
         cin>>a[i][j];
         if(i==0) {sum+=a[i][j]; v.push_back(a[i][j]);}
         else if(j==n-1) {sum+=a[i][j]; v.push_back(a[i][j]);}
     }
 }
 n=2*n;
 cout<<(n*(n+1))/2 - sum<<" ";

 for(auto x:v){
     cout<<x<<" ";
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