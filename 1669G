#include <bits/stdc++.h>
#define reverse(arr) reverse(arr.begin(),arr.end());
#define int long long 
#define deci(x) int x;cin >> x;
#define decstr(x) string x;cin>>x;
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define spc ' '
#define coutarr(arr) for (auto &it : arr) cout<<it<<" ";cout<<endl;
#define cinarr(x) for (auto &it : x) cin>>it;
#define sortarr(x) sort(x.begin(),x.end());
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define pb push_back
 
using namespace std;
 
void solve(){
	deci(n);deci(m);
	char N[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> N[i][j];
		}
	}
	for (int i = 0; i < n+1; ++i)
	{
		for(int j=0;j<n;j++){
			for (int t = 0; t < m; ++t)
			{
				if(N[j][t]=='*' && N[j+1][t]=='.' && j!=n-1){
					N[j][t]='.';
					N[j+1][t]='*';
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << N[i][j];
		}
		cout << endl;
	}
	cout << endl ;
}
 
int32_t main() {
	deci(t);
	while(t--){
		solve();
	}
 
}
