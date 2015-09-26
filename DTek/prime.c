/*
 prime.c
 By David Broman.
 Last modified: 2015-09-15
 This file is in the public domain.

Artem
*/


#include <stdio.h>

int is_prime(int n){

	int i, s;
	s = 1;

	for (i = 2; (i*i <= n) && s; i++) {
		if (n%i==0)
			s = 0;
		else
			s = 1;

	}
		
	return s;
}

int main(void){
  printf("%d\n", is_prime(11));  // 11 is a prime.      Should print 1.
  printf("%d\n", is_prime(383)); // 383 is a prime.     Should print 1.
  printf("%d\n", is_prime(987)); // 987 is not a prime. Should print 0.
}

