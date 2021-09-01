#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(int argc, char* argv[]){
	startGen();
	int n = atoi(argv[1]);
	for(int i=1; i<=n; ++i){
		cout << rand_int() << " ";
	}
	cout << "\n";
	return 0;
}
