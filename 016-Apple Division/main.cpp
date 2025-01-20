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
    IO;
    ll n;
    cin>>n;
    ll ans=INT_MAX;
    vll vec(n);
    ll sum=0;
    rep(i,0,n){
        cin>>vec[i];
        sum+=vec[i];
    }
    rep(i,0,1<<n){
        ll s=0;
        rep(j,0,n){
            if(i&(1<<j)) s+=vec[j];
        }
        ll x=abs((sum-s)-s);
        ans=min(ans,x);
    }
    cout<<ans<<endl;
    return;
}
int main(){
    IO;
    int t;
    //cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
