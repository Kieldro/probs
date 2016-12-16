{
	int c = int [10^6];	// init to 0s
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
}

double combine(primes[], int k){
	for (int i = 0; i < len; ++i)
		for (int j = i; j < len; ++j)
			if (k-- == 0) return primes[i] * primes[j];		
}

//combinations(order of factors)
a, b, c, d
aa, ab, ac, ad, bb, bc, bd, cc, cd, dd
aaa, aab, aac, aad, abb, abc, abd, 
aaaa, aaab, 
aaaaa, aaaab, 
