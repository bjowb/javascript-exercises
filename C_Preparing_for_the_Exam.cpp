#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    vector<int>arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    vector<int>done(k);
    vector<bool>vis(n+1,0);
    for(int i = 0; i < k; i++) {
        cin >> done[i];
        vis[done[i]] = 1;
    }

    int l = done.size();
    for(int i = 0; i < m; i++){
        if(l == n || l == n-1 && !vis[arr[i]])
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}