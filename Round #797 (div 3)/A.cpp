#include <bits/stdc++.h>
using namespace std;

void func(int f, int tmp){
	int s, t;
	if(tmp % 2 == 0){
		s = tmp/2+1;
		t = tmp - s;
	}
	else{
		s = (tmp+1)/2;
		t = tmp - s;
	}
	//Base Condition
	if(f > s && s > t){
		cout << s << ' ' << f << ' ' << t << '\n';
		return;
	}

	if(s >= f)
		func(f+1, tmp-1);

	return;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int first, tmp;
		first = n/3+n%3;
		tmp = n - first;

		func(first, tmp);
	}
	return 0;
}