#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
  ll a,b,c; cin>>a>>b>>c;
   ll ans1=abs(b - a) + abs(c - b);
   ll ans2=abs(c - a) + abs(b - c);
   ll ans3=abs(a - b) + abs(c - a);
   cout<<min({ans1,ans2,ans3})<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}