#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(){
	startGen();
	rand_tree(10);
	printf("\n\n\n");
	rand_connected_directed_weighted_graph(10, 20);
	printf("\n\n\n");
	rand_undirected_weighted_graph(10, 20);
	return 0;
}
