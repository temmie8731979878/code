#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma comment(linker, "/STACK:1024000000")
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long
#define PB push_back
const int MAX_SIZE = 1e5+5;
const int INF = 1e18;
using namespace std;
using namespace __gnu_pbds;

// declare
int t, a, b;

signed main(void){
	fastio;
	
	// input
	cin >> t;
	while (t--){
		cin >> a >> b;
		
		for (int i=100 ; i<=10000 ; i++){
			if (i%a!=0 && b*i%a==0){
				cout << i << "\n";
			}
		}

		cout << "=========\n";
	}
    return 0;
}