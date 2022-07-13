#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma comment(linker, "/STACK:1024000000")
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define int long long
#define MAX_SIZE (int)1e5+5

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_set;
// typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> order_set;

// declare
int t, n, tmp, output;
vector<pair<int, int>> input;
vector<int> p;
order_set os;

signed main(void){
	fastio;
	
	// input
	cin >> t;
	while (t--){
		// init
		input.clear();
		p.clear();
		output = 0;
		
		// input
		cin >> n;
        for (int i=1 ; i<=n ; i++){
        	cin >> tmp;
        	
        	if (i>tmp){
        		input.push_back({tmp, i});
        	}
        }
        
        // process
        for (int i=0 ; i<input.size() ; i++){
            cout << "find: " << os.order_of_key(input[i].first) << "\n";
            output += os.order_of_key(input[i].first);

        	
        	// final
            os.insert(input[i].second);
        }
        
        // output
        for (auto x : input){
            cout << x.first << " ";
        }   cout << "\n";
        for (auto x : input){
            cout << x.second << " ";
        }   cout << "\n";
        cout << output << "\n";
	}
    return 0;
}