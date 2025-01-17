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

void solve(){
    string s;
    cin>>s;
    ll ans=1;
    char c=s[0];
    ll sizee=1;
    rep(i,1,s.size()){
        if(s[i]==c){
            sizee++;
        }
        else{
            ans=max(ans,sizee);
            sizee=1;
            c=s[i];
        }
    }
    ans=max(ans,sizee);
    cout<<ans<<endl;
    return;
}
int main() { 
    IO;
    int t;
    //cin >> t;
    t=1;
    while (t--) {
        solve();
    }

  return 0;
}