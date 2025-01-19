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
    ll t,x,y;
    cin>>y>>x;
    ll k=max(x,y);
    ll c=k*k;
    ll ans;
    if(k%2==0){
        if(k==y){
            ans=c-x+1;
        }
        else{
            ans=c-(2*k-y)+1;
        }
    }
    else{
        if(k==x){
            ans=c-y+1;
        }
        else{
            ans=c-(2*k-x)+1;
        }
    }
    cout<<ans<<endl;
    return;
}

int main(){
    IO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
