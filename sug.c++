/*combinations(order of factors)
a, b, c, d
aa, ab, ac, ad, bb, bc, bd, cc, cd, dd
aaa, aab, aac, aad, abb, abc, abd, 
aaaa, aaab, 
aaaaa, aaaab, 
*/

// preprocessor directive - space required after include
#include <iostream>		// for cout/cin
#include <cassert>		// for assert fuction
// #include <string>
#include <vector>
#include <stdio.h>		// for printf

using namespace std;		// generally in poor taste
using std::cout;		// alternatively

// prototypes
double combine(int[], int k);

class Solution {
public:
  	int nthSuperUglyNumber(int n, vector<int>& primes) {
	/*	int c = int [10^6];	// init to 0s
		int x = 0;
		int y = 0;
		sug[0] = 1;
		
		for(int i = 1; i < n; ++i){		
			x = primes[c[0]];
			y = combine(primes, c[1]);
			while(x > y && true){
				c[1]++;
				sug[i] = y;	
			}
				c[0]++;
				sug[i] = x;
		}
		
		return sug[n];
*/
		return 0;
        
 	}
};

int main (int argc, char **argv){		// must return int
	cout << "Hello World!" << endl;		// endl flushes the buffer
	
	return 0;
}

// functions
double combine(vector<int>& primes, int k){
	for (int i = 0; i < primes.size(); ++i)
		for (int j = i; j < primes.size(); ++j)
			if (k-- == 0) return primes[i] * primes[j];		
	return 0;
}
