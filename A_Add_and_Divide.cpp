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
    ll a,b;
    cin >> a >> b;

    if (a == 0) {
        cout << 0 << endl;
        return;
    }

    long long minSteps =LLONG_MAX;

    for (long long i = 0; i < 32; ++i) {
        long long b1 = b + i;
        if (b1 < 2) continue;

        long long steps = i;
        long long a1 = a;
        while (a1 > 0) {
            a1 /= b1;
            ++steps;
        }

        minSteps = min(minSteps, steps);
    }

    cout << minSteps << endl;

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