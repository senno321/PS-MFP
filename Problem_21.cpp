#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N = 10001;

int divsum[N];

void solve() { 


    for(int i = 1; i < N; i++){

        int currsum = 0;

        // itera até sqrt(i) para encontrar os divisores

        for(int j = 1; j*j <= i; j++){
            if(i%j == 0){
                currsum += j;
                if(j != 1 && j*j != i){
                    currsum += i/j;
                }
            }
        }

        // armazena a soma dos divisores de i

        divsum[i] = currsum;
    }

    int ans = 0;

    // contabiliza o número dos pares pedidos

    for(int a = 1; a < N; a++){

        int b = divsum[a];

        if(b < N && a != b && divsum[b] == a){
            ans += a;
        }
    }

    // resultado

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