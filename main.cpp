#include <bits/stdc++.h>

#define BANKAI ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define mem(a, x) memset(a , x , sizeof(a));
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()
#define inn(a) for(auto&i : a) cin>>i;
#define out(a) for(auto&i : a) cout<<i<<" ";

const double pi = acos(-1);
const int N = 1e6 + 10;
using namespace std;


void Open() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}



void solve() {

    int n, k, result=0; cin>>n>>k;

    while(n--){
        int x, count=0; cin>>x;
        int freq[10]={};
        while(x){
            if((!freq[x%10]) && (x%10<=k)){
                count++;
                freq[x%10]=1;
            }
            x/=10;
        }
        k+1 == count ? result++ : result;
    }

    cout<<result;


}


int main() {
    BANKAI
    int tc = 1;
//    cin >> tc;
    while (tc--)
        solve();
    return 0;
}

/*



*/