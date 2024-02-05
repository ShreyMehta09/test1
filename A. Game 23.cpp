#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using dd = double;
#define endl '\n'
#define MOD 1000000007
void solve() {
    ll n,m,ans = 0;
    cin>>n>>m;

    if(n == m){
        cout<<0<<endl;
    }
    else if(m % n != 0){
        cout<<-1<<endl;
    }
    else{
        ll d = m/n;
        while(d % 2 == 0){
            d /= 2;
            ans++;
        }
        while(d % 3 == 0){
            d /= 3;
            ans++;
        }
        if(d != 1)ans = -1;
        cout<<ans<<endl;
    }

}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
