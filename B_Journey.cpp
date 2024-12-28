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
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    int sum = a+b+c;
    if(n%sum == 0){
        cout<<(n/sum)*3<<endl;
    }
    else{
        int left = n%sum;
        int ans = (n/sum)*3;
        if(left <= a){
            ans++;
        }
        else if(left <= a+b){
            ans+=2;
        }
        else{
            ans+=3;
        }
        cout<<ans<<endl;
    }
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