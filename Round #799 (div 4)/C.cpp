//https://codeforces.com/contest/1692/problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		int x, y;
		char c[9][9];
		//체스판 그리기
		for(int i=0; i<8; ++i)
			for(int j=0; j<8; ++j)
				cin >> c[i][j];

		for(int i=1; i<7; ++i)
			for(int j=1; j<7; ++j){
				if(c[i][j] == '#'){
					x = i;
					y = j;
					if(c[x-1][y-1] == '#' && c[x-1][y+1] == '#' && c[x+1][y-1] == '#' && c[x+1][y+1] == '#')
						cout << x+1 << ' ' << y+1 << '\n';
				}
			}
	}
	return 0;
}
