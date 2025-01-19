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
    cin >> s;
    int n=s.size();
    vector<int> vecc(26, 0);
    for(int i=0; i<n; i++) {
        vecc[s[i]-'A']++;
    }
    string palindrome = "";
    char middleChar = ' ';
    for(int i=0; i<26; i++) {
        if(vecc[i]%2==1) {
            if(middleChar != ' ') {
                cout << "NO SOLUTION";
                return;
            }
            middleChar = i+'A';
        }
        for(int j=0; j<vecc[i]/2; j++) {
            palindrome += i+'A';
        }
    }
    string secondHalf = palindrome;
    reverse(secondHalf.begin(), secondHalf.end());
    if(middleChar != ' ') {
        palindrome += middleChar;
    }
    palindrome += secondHalf;
    cout<<palindrome<<endl;
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
