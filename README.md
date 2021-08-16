# genlib
Generate testcase for competitive programming in C++ Languauge.
### Function
|name|type|usage|
|---|---|---|
|``startGen()``|``void``|To start the generator|
|``rand_int(int l, int r)``|``int``| generate number in range ``l`` to ``r``|
|``rand_tree(int n, bool print=true)``|``set<pair<int, int>``|generate tree with ``n`` nodes|
|``rand_connected_directed_unweighted_graph(int n, int m, bool print=true)``|``set<int, int>``|generate directed graph with ``n`` nodes and ``m`` edges in 1 component|
|``rand_connected_directed_weighted_graph(int n, int m, int l=1, int r=10000, bool print=true)``|``set<tuple<int, int, int>>``|generate directed graph with ``n`` nodes, ``m`` edges and weight in range ``l`` to ``r`` in 1 component|
|``rand_undirected_weighted_graph(int n, int m, int l=1, int r=10000, bool print=true)``|``set<tuple<int, int, int>>``|generate directed weighted graph with ``n`` nodes, ``m`` edges and weight in range ``l`` to ``r`` in random number of components|
### Example
```
#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(){
	startGen();
	printf("%d", rand_int(1, 100));
	return 0;
}
```