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
    int n;
    cin >> n;
    vector<vector<int>>store(n);
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int>doit(m);
        for(int j = 0; j < m; j++) {
            cin >> doit[j];
        }
        store[i] = doit;
    }
    int a = INT_MAX;
    int b = INT_MAX;
    ll sum = 0;

    for(auto x : store){
        sort(all(x));
        a = min(a,x[0]);
        if(x.size() > 1){
            b = min(b,x[1]);
            sum += x[1];
        }
    }

    cout<<sum - b + a<<endl;

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