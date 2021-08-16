#include <cstdlib>
#include <vector>
#include <ctime>
#include <set>
#include <tuple>

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

string rand_str(int sz=1, char l='a', char r='z'){
	string s;
	for(int i=1; i<=sz; ++i){
		char newchr = (char)rand_int(l, r);
		s += newchr;
	}
	return s;
}

template<typename T> vectopr<T> rand_perm(vector<T> v){
	random_shuffle(v.begin(), v.end());
	return v;
}

vector<int> rand_perm(int n){
	vector<int> v;
	for(int i=1; i<=n; ++i){
		v.push_back(i);
	}
	return random_perm(v);
}

set<tuple<int, int>> gen_tree(int n, bool print = true){
	set<tuple<int, int>> s;
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

set<tuple<int, int>> gen_connected_graph(int n, int m, bool print = true){
	set<tuple<int, int>> s;
	for(int i=1; i<n; ++i){
		if(print){
			printf("%d %d\n", i, i+1);
		}
		s.emplace(i, i + 1);
	}
	while((int)s.size() != m){
		int a = rand_int(1, n), b = rand_int(1, n);
		int u = min(a, b), v = max(a, b);
		if(u == v || s.count(make_tuple(u, v))){
			continue;
		}
		if(print){
			printf("%d %d\n", u, v);
		}
		s.emplace(u, v); 
	}
	return s;
}

set<tuple<int, int>> gen_graph(int n, int m, bool print = true){
	set<tuple<int, int>> s;
	while((int)s.size() != m){
		int a = rand_int(1, n), b = rand_int(1, n);
		int u = min(a, b), v = max(a, b);
		if(u == v || s.count(make_tuple(u, v))){
			continue;
		}
		if(print){
			printf("%d %d\n", u, v);
		}
		s.emplace(u, v);
	}
	return s;
}

set<tuple<int, int>> gen_complete_graph(int n, bool print = true){
	set<tuple<int, int>> s;
	for(int i=1; i<=n; ++i){
		for(int j=i+1; j<=n; ++j){
			if(print){
				printf("%d %d\n", i, j);
			}
			s.emplace(i, j);
		}
	}
	return s;
}
