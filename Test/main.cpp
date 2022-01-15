
// Test case generator example

#include<bits/stdc++.h>
#include "../testlib/testlib.h"
#include "../genlib.h"
using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int n = opt<int>(1);
	for(int i=1; i<=n; ++i){
		cout << rand_str(5, 'A', 'B') << "\n";
	}
	return 0;
}
