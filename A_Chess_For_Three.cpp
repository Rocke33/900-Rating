#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void rocke() {
ll a,b,c; cin>>a>>b>>c;
if((a+b+c)%2==1){
    cout<<-1<<endl;
    return;
}
if(a+b<c){
ll ans=a;
c=c-a;
ans+=min(c,b);
cout<<ans<<endl;
return;
}
    cout<<(a+b+c)/2<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        rocke();
    }
    return 0;
}