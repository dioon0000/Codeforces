//https://codeforces.com/contest/1690/problem/B
#include <bits./stdc++.h>
#define MAX 50000
using namespace std;

void solve(){
    int n, a[MAX], b[MAX];
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        cin>>b[i];
    int val=0;

    for(int i = 0; i < n; i++)
        val =max(val, a[i]-b[i]);
    for(int i = 0; i < n; i++)
        a[i]=max(0, a[i]-val);

    for(int i = 0; i < n; i++){
        if(a[i]!=b[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main(){
    int t;
    cin >> t;

    while(t--)
        solve();
} 
