using System;

class prime {
	static void Main() {
		int i = 0;

		for (int a = 1; a <= 30000000; a++) {
			if (isPrime(a)) {
				//Console.WriteLine(a + ": is prime");
				i++;
				continue;
			}
			//Console.WriteLine(a + ": not prime");
		}

		Console.WriteLine("Found " + i + " primes.");
	}

	static bool isPrime(int value) {
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
}
