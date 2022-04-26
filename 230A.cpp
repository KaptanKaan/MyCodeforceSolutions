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
 
 
template <typename T>
pair<T, bool> getNthElement(set<T>& searchSet,
                            int index)
{
    pair<T, bool> result;
 
    if (searchSet.size() > index) {
        result.first
            = *(std::next(
                searchSet.begin(),
                index));
        result.second = true;
    }
 
    else
        result.second = false;
 
 
    return result;
}
 
int32_t main() {
	deci(hasar);deci(n);
	set<int> N;
	map<int ,int> m;
	for (int i = 0; i < n; ++i)
	{
		deci(x);deci(y);
		m[x]+=y;
		N.insert(x);
	}	

	for (int i = 0; i < n; ++i)
	{
		pair<int, bool> result = getNthElement(N, i);
		if(hasar>result.first) {hasar+=m[result.first];}
		else {cout << "NO" << endl; return 0;}
	}
	cout << "YES" << endl;
}
