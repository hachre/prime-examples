#include <iostream>

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

	for (int a = 1; a <= 30000000; a++) {
		if (isPrime(a)) {
			//std::cout << a << ": is prime\n";
			i++;
			continue;
		}
		//std::cout << a << ": not prime\n";
	}

	std::cout << "Found " << i << " primes.";
}
