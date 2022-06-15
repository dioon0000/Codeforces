https://codeforces.com/contest/1692/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, a, b, c, d;
	cin >> t;
	while(t--){
		int cnt = 0;
		cin >> a >> b >> c >> d;
		if(a < b)
			cnt++;
		if(a< c)
			cnt++;
		if(a < d)
			cnt++;
		cout << cnt << '\n';
	}
	return 0;
}
