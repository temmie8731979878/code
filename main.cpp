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
int a=0, b=0, c=0;
double total=0;

signed main(void){
	fastio;
	srand(time(NULL));
	
	// input
	int n, k, score;

	cin >> n;
	for (int i=0 ; i<n ; i++){
		score = 0;
		for (int j=0 ; j<50 ; j++){
			
			k = rand()%4;
			// cout << k << "\n";
			if (k==0) score += 2;
		}

		// check
		total += score;
		if (score==60){
			a++;
		}
		if (score>=60){
			b++;
		}
		c++;
	}

	// output
	cout << total/(double)n << "\n";
	cout << a << " " << b << " " << c << "\n";
    return 0;
}