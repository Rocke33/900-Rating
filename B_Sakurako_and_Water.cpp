#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
 ll n,ans=0,b,i,j; cin>>n;
 vector<vector<ll>>a(n,vector<ll>(n));
   for( i=0;i<n;i++){
    for( j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
    for(b=0;b<n;b++){
        ll mx=0;i=0,j=b;
        while(i<n && j<n){
            if(a[i][j]<0) mx=max(mx,abs(a[i][j]));
            i++;j++;
        }
        ans+=mx;
    }
    for( b=1;b<n;b++){
        ll mx=0;i=b,j=0;
        while(i<n && j<n){
            if(a[i][j]<0) mx=max(mx,abs(a[i][j]));
            i++;j++;
        }
        ans+=mx;
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