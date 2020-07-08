# ACPC-girls-competition-preparation
In this repo I added my soultions for some problems on codeforces, and this is the link of the problems
https://codeforces.com/group/X9W9cBLHIG/contests

**Some (Tips and tricks) by our coach -in the competetion- Eng: AMR-KELEG** 

## How to compare two floating point variables?
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	double a = 1.0 / 100;
	double b = 0;
	for (int i=0; i< 100; i++)
		b += a;
	if ((100 * a) == b)
		cout<<"EQ";
	else
		cout<<"NOT EQ";
}
```
If you try this snippet, you might get a "NOT EQ" output.

The solution would be to ensure that the delta between 100a and b is a very small value as follows:

```cpp
#include <bits/stdc++.h>
using namespace std;

// A very small value 10^-9 or even smaller
#define EPS 1e-9 

int main(){
	double a = 1.0 / 100;
	double b = 0;
	for (int i=0; i< 100; i++)
		b += a;
	if (abs( (100 * a) &mdash; b ) < EPS)
		cout<<"EQ";
	else
		cout<<"NOT EQ";
}
```

## Printing small floating point values might result in a scientific notation output:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	double a = 1e-9;
	cout<< a << "\n"; // prints 1e-09

	cout<<fixed<<setprecision(12)<<a; // prints 0.000000001000

	return 0;
}
```

The idea is to use fixed which prevents the usage of scientific notation and setprecision which indicates the number of numbers after the floating point to be printed.

## Graph theory:
Graph theory is a common idea in most of the contests. There are some algorithms that you need to know to be able to master this interesting yet challenging topic.

Mostafa Saad's video for BFS can be found here: https://www.youtube.com/watch?v=COB1GHq0YwY

If you want to revise the different graph representation methods then you can start from the first video of the Graph Theory playlist: https://www.youtube.com/watch?v=jzfcfQVBtKA&list=PLPt2dINI2MIb4OXlJ_EEwIDV9WVUpRQ5K

Topological sort is explained here: https://www.youtube.com/watch?v=9DP0X2xlPCo


## Prefix Sum:
Prefix or cummulative sum is a simple yet a powerful way to find sum of elements in range [i, j] of an array where 0<= i,j <= n-1 and n is the length of the array.

Mostafa Saad's Video: https://www.youtube.com/watch?v=hqOqr6vFPp8
Codility tutorial (The code is written in python yet the idea is clear) : https://codility.com/media/train/3-PrefixSums.pdf
