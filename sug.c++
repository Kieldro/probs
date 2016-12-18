/*
Write a program to find the nth super ugly number.

Super ugly numbers are positive numbers whose all prime factors are in the given prime list primes of size k. 
For example, [1, 2, 4, 7, 8, 13, 14, 16, 19, 26, 28, 32] is the sequence of the first 12 super ugly numbers given primes = [2, 7, 13, 19] of size 4.

Note:
(1) 1 is a super ugly number for any given primes.
(2) The given numbers in primes are in ascending order.
(3) 0 < k ≤ 100, 0 < n ≤ 106, 0 < primes[i] < 1000.

combinations(order of factors)
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

class Solution {
public:
  	int nthSuperUglyNumber(int n, vector<int>& primes) {
		vector<int> c(primes.size());	// init to 0s
		vector<int> sug(n);
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
		
		return sug[n-1];
 	}
 private:
	double combine(vector<int>& primes, int k){
		for (int i = 0; i < primes.size(); ++i)
			for (int j = i; j < primes.size(); ++j)
				if (k-- == 0) return primes[i] * primes[j];		
		return 0;
	}
};

int main (int argc, char **argv){		// must return int
	cout << "Hello World!" << endl;		// endl flushes the buffer
	
	
	Solution s;
	vector<int> primes = {2, 7, 13, 19};
	for (auto i : primes)
		cout << i << " ";
	cout << endl;
	
	int result = s.nthSuperUglyNumber(1, primes);
	cout << "result: " << result << endl;		// endl flushes the buffer
	
	return 0;
}