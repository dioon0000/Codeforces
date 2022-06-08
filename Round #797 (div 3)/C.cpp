#include <bits/stdc++.h>
#define MAX 200000
using namespace std;
int a[MAX], b[MAX];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];

		for(int i=0; i<n; ++i)
			cin >> b[i];

		for(int i=0; i<n; ++i){
			if(i == 0){
				cout << b[i] - a[i] << ' ';
			}
			else{
				if(a[i] >= b[i-1]){
					cout << b[i] - a[i] << ' ';
				}
				else
					cout << b[i]- b[i-1] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}