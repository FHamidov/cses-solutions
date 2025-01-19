#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>b;i--)
#define repi(i,a,b) for(ll i=a;i<=b;i++)
#define rrepi(i,a,b) for(ll i=a;i>=b;i--)
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define endl '\n'
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve() {
    ll n;
    cin >> n;

    cout << ((1 << n) - 1) << endl;

    stack<pair<int, int>> left, middle, right;

    for (ll i = n; i >= 1; i--) {
        left.push({i, 1});
    }

    ll total_moves = (1 << n) - 1;

    for (ll move = 1; move <= total_moves; move++) {
        if (move % 3 == 1) {
            if (n % 2 == 0) {
                if (left.empty() || (!middle.empty() && middle.top().first < left.top().first)) {
                    left.push(middle.top());
                    middle.pop();
                    cout << 2 << " " << 1 << endl;
                } else {
                    middle.push(left.top());
                    left.pop();
                    cout << 1 << " " << 2 << endl;
                }
            } else {
                if (left.empty() || (!right.empty() && right.top().first < left.top().first)) {
                    left.push(right.top());
                    right.pop();
                    cout << 3 << " " << 1 << endl;
                } else {
                    right.push(left.top());
                    left.pop();
                    cout << 1 << " " << 3 << endl;
                }
            }
        } else if (move % 3 == 2) {
            if (n % 2 == 0) {
                if (left.empty() || (!right.empty() && right.top().first < left.top().first)) {
                    left.push(right.top());
                    right.pop();
                    cout << 3 << " " << 1 << endl;
                } else {
                    right.push(left.top());
                    left.pop();
                    cout << 1 << " " << 3 << endl;
                }
            } else {
                if (left.empty() || (!middle.empty() && middle.top().first < left.top().first)) {
                    left.push(middle.top());
                    middle.pop();
                    cout << 2 << " " << 1 << endl;
                } else {
                    middle.push(left.top());
                    left.pop();
                    cout << 1 << " " << 2 << endl;
                }
            }
        } else if (move % 3 == 0) {
            if (middle.empty() || (!right.empty() && right.top().first < middle.top().first)) {
                middle.push(right.top());
                right.pop();
                cout << 3 << " " << 2 << endl;
            } else {
                right.push(middle.top());
                middle.pop();
                cout << 2 << " " << 3 << endl;
            }
        }
    }
}

int main() {
    IO;
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
