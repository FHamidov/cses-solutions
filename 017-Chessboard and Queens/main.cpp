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

char table[8][8];
ll ans;
bool leftD[16],rightD[16],row[8];
void search(ll x){
    if(x==8){
        ans++;
        return;
    }
    repi(i,0,7){
        if(table[i][x]=='.' and leftD[i-x+7]==0 and rightD[i+x]==0 and row[i]==0){
            leftD[i-x+7]=1;
            rightD[i+x]=1;
            row[i]=1;
            search(x+1);
            leftD[i-x+7]=0;
            rightD[i+x]=0;
            row[i]=0;
            
        }
    }
}
void solve(){
    repi(i,0,7){
        repi(j,0,7){
            cin>>table[i][j];
        }
    }
    search(0);
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
