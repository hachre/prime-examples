#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

bool isPrime(int value) {
	if (value <= 3) {
		return value >= 2;
	}
	if ((value%2 == 0) || (value%3 == 0)) {
		return false;
	}
	for (int i = 5; i*i <= value; i += 6) {
		if ((value%i == 0) || (value%(i+2) == 0)) {
			return false;
		}
	}
	return true;
}

int main() {
	int i = 0;

	char str[80];
   	for (int a = 1; a <= 30000000; a++) {
		if (isPrime(a)) {
        		//sprintf(str, "%d: is prime\n", a);
			//printf("%s", str);
			i++;
			continue;
		}
		//sprintf(str, "%d: not prime\n", a);
		//printf("%s", str);
	}

	sprintf(str, "Found %d primes.\n", i);
	printf("%s", str);
}
