# genlib
Generate testcase for competitive programming in C++ Languauge.
[Download](https://raw.githubusercontent.com/MasterIceZ/genlib/main/genlib.h)

### Requirements
``stdc++.h`` which will be installed form g++(linux) or download it [here](https://github.com/khaveesh/macOS-stdc.h)

### Example
```cpp
#include<bits/stdc++.h>
using namespace std;

#include "genlib.h"

int main(int argc, char *argv[]){
	startGen(argv, 1);
	printf("%d", rand_int(1, 100));
	return 0;
}
```
see more at [example](https://github.com/MasterIceZ/genlib/tree/main/example)  
list of all functions will be provided [here](https://github.com/MasterIceZ/genlib/blob/main/functions.md)