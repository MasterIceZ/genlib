# genlib
Generate testcase for competitive programming in C++ Languauge.
[Download](https://raw.githubusercontent.com/MasterIceZ/genlib/main/genlib.h)
### Function
|name|return type|usage|
|---|---|---|
|``startGen()``|``void``|To start the generator|
|``rand_int(int l, int r)``|``int``| generate number in range ``l`` to ``r``|
|``rand_str(int sz, char l, char r)``|``string``|generate string size ``n`` with element in range ``l`` to ``r``|
|``rand_prime(int l=1, int r=100)``|``int``|random prime in range ``l`` to ``r``|
|``rand_perm(vector<T> v)``|``vector<T>``|shuffle element in ``v``|
|``rand_perm(set<T> s)``|``vector<T>``| shuffle element in ``s``|
|``rand_perm(int n)``|``vector<T>``|generate vector with ``1`` to ``n`` and shuffle it|
|``choose(vector<T> v)``|``T``|choose ``1`` element in vector|
|``gen_tree(int n, bool print = true)``|``set<tuple<int, int>>``|generate set of edge list of ``1`` tree with ``n`` nodes|
|``gen_connected_graph(int n, int m, bool print = true)``|``set<tuple<int, int>>``|generate ``1`` graph's edge with ``m`` edges and ``n`` nodes|
|``gen_complete_graph(int n, bool printed = true)``|``set<tuple<int, int>>``|generate complete graph's edge with ``n`` nodes|
|``gen_graph(int n, int m, bool print = true)``|``set<tuple<int, int>>``|generates graph's of ``n`` nodes|
|``gen_table(int n, int m, char a, char b, bool print = true)``|``vector<vector<char>>``|generate table with ``n`` row ``m`` column which filled with ``a`` and ``b``|
### Example
```cpp
#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(){
	startGen();
	printf("%d", rand_int(1, 100));
	return 0;
}
```
see more at [example](https://github.com/MasterIceZ/genlib/tree/main/example)