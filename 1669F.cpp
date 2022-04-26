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
	deci(n);
	int N[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> N[i];
	}
	int l=0,r=n-1,suml=N[0],sumr=N[n-1],ans=0;
	while(l<r){
		if(suml==sumr)
			ans=max(ans,l+1+n-r);

		if(suml <=sumr){
			l+=1;
			suml+=N[l];
		}
		else if(sumr <suml){
			r-=1;
			sumr+=N[r];
		}
	}
	cout << ans << endl;
}

int32_t main() {
	ios;
	deci(t);
	while(t--){
		solve();
	}
		
}
