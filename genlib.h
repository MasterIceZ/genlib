#include <cstdlib>
#include <vector>
#include <ctime>
#include <set>

using namespace std;

void startGen(){
	srand(time(NULL));
}

int rand_int(int l = 1, int r = 10){
	if(l > r){
		return -1;
	}
	return (rand() % (r - l + 1)) + l;
}

set<pair<int, int>> rand_tree(int n, bool print = true){
	set<pair<int, int>> s;
	for(int i=2; i<=n; ++i){
		int u = rand_int(1, i - 1), v = i;
		if(u == v){
			continue;
		}
		if(print){
			printf("%d %d\n", u, v);
		}
		s.emplace(u, v);
	}
	return s;
}

set<pair<int, int>> rand_connected_directed_unweighted_graph(int n, int m, bool print = true){
	set<pair<int, int>> s;
	for(int i=1; i<n; ++i){
		if(print){
			printf("%d %d\n", i, i+1);
		}
		s.emplace(i, i + 1);
	}
	while((int)s.size() != m){
		int a = rand_int(1, n), b = rand_int(1, n);
		int u = min(a, b), v = max(a, b);
		if(u == v || s.count(make_pair(u, v))){
			continue;
		}
		if(print){
			printf("%d %d\n", u, v);
		}
		s.emplace(u, v); 
	}
	return s;
}

set<tuple<int, int, int>> rand_connected_directed_weighted_graph(int n, int m, int l=1, int r=10000, bool print = true){
	set<tuple<int, int, int>> s;
	set<pair<int, int>> tree;
	for(int i=1; i<n; ++i){
		int wei = rand_int(l, r);
		if(print){
			printf("%d %d %d\n", i, i+1, wei);
		}
		tree.emplace(i, i + 1);
		s.emplace(i, i + 1, wei);
	}
	while((int)s.size() != m){
		int a = rand_int(1, n), b = rand_int(1, n);
		int u = min(a, b), v = max(a, b);
		if(u == v || tree.count(make_pair(u, v))){
			continue;
		}
		int wei = rand_int(l, r);
		if(print){
			printf("%d %d %d\n", u, v, wei);
		}
		tree.emplace(u, v);
		s.emplace(u, v, wei); 
	}
	return s;
}

set<tuple<int, int, int>> rand_undirected_weighted_graph(int n, int m, int l=1, int r=10000, bool print = true){
	set<tuple<int, int, int>> s;
	set<pair<int, int>> graph;
	while((int)s.size() != m){
		int a = rand_int(1, n), b = rand_int(1, n);
		int u = min(a, b), v = max(a, b);
		if(u == v || graph.count(make_pair(u, v))){
			continue;
		}
		int wei = rand_int(l, r);
		if(print){
			printf("%d %d %d\n", u, v, wei);
		}
		graph.emplace(u, v);
		s.emplace(u, v, wei);
	}
	return s;
}
