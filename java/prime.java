class prime {
	public static void main(String[] args) {
		int i = 0;

		for (int a = 1; a <= 30000000; a++) {
			if (isPrime(a)) {
				//System.out.println(a + ": is prime");
				i++;
				continue;
			}
			//System.out.println(a + ": not prime");
		}

		System.out.println("Found " + i + " primes.");
	}

	private static Boolean isPrime(int value) {
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
