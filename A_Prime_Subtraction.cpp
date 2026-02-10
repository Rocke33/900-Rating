#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
   ll x,y; cin>>x>>y;
    if(x-y ==1) cout<<"NO"<<endl;
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