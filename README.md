# genlib
Generate testcase for competitive programming in C++ Languauge.
[Download](https://raw.githubusercontent.com/MasterIceZ/genlib/main/genlib.h)

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
list of all functions will be provided [here](https://github.com/MasterIceZ/genlib/blob/main/functions.md)