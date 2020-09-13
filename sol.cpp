#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	char a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int cnt=0;
	vector<int> v;
	for(int i=0; i<n; ++i) {
		if(a[i]=='D')
			cnt--;
		else
			cnt++;
		v.push_back(cnt);
	}
	int ans=0;
	for(int i=0; i<(int)v.size()-1; ++i)
		if(v[i]==-1&&v[i+1]==0)
			ans++;
	cout << ans << "\n";
}
