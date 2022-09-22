//https://codeforces.com/contest/1692/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		int n, arr[10001] ={0, }, tmp, even=0, odd=0;
		cin >> n;
		for(int i=0; i<n; ++i){
			cin >> tmp;
			arr[tmp]++;
		}

		for(int j=1; j<10001; ++j){
			if(arr[j]%2!=0)
				odd++;
			else if(arr[j]%2==0 && arr[j]!=0)
				even++;
		}

		if(even%2==0)
			cout << even+odd << '\n';
		else
			cout << even-1+odd << '\n';
	}
	return 0;
}