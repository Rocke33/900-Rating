#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
ll n,k,ans; cin>>n>>k;
if(n==0){
 ans=k;
} 

else if(k>=n)   ans=k-n;

 else if((n%2==0 && k%2==0) || (n%2==1 && k%2==1)) ans=0;

 else  ans=1;

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