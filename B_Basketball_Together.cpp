#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b = a;
    sort(b.begin(), b.end());
    int ans = 0, n1 = n;

    for (int i = n - 1; i >= 0; i--) {
        int val = b[i];
        if (val > d) {
            ans++;
            n1--;
        }
        else {
            int l = (d + 1 + val - 1)/val;
            if(n1 >= l) {
                ans++;
                n1 -= l;
            }
            else 
                break;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
