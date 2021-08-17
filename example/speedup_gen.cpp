#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	int k = atoi(argv[3]);
	int q = atoi(argv[4]);
	startGen();
	printf("%d %d %d %d\n", n, m, k, q);
	set<tuple<int, int>> edges = gen_connected_graph(n, m, false);
	for(set<tuple<int, int>>::iterator it = edges.begin(); it != edges.end(); ++it){
		printf("%d %d %d\n", get<0>(*it), get<1>(*it), rand_int(1, 10) * 256);
	}
	set<int> s;
	while(s.size() != l){
		int a = rand_int(1, n);
		if(!s.count(a)){
			s.insert(a);
			printf("%d ", a);
		}
	}
	return 0;
}
