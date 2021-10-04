#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int x = atoi(argv[3]);
	startGen(argv, 1);
	printf("%d %d\n", n, m);
	set<tuple<int, int>> st = gen_connected_graph(n, m, 0);
	for(set<tuple<int, int>>::iterator it = st.begin(); it != st.end(); ++it){
		int u = get<0>(*it), v = get<1>(*it);
		printf("%d %d %d\n", u, v, rand_int(1, x));
	}
	return 0;
}
