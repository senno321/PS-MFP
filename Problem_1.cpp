#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() { 

    set<int> st;

    for(int i = 1; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            if(st.find(i) == st.end()) st.insert(i);
        }
    }

    int ans = 0;

    for(auto el : st) ans += el;

    cout << ans << endl;

}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE 
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif
    
    //int T; cin >> T; while(T--) {solve();}
    solve();

    return 0;
}