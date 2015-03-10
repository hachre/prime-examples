func Main() {
	var i = 0;

	var a: Int32;
	for (a = 1; a <= 30000000; a++) {
		if (isPrime(a)) {
			//println("\(a): is prime");
			i++;
			continue;
		}
		//println("\(a): not prime");
	}

	println("Found \(i) primes.");
}

func isPrime(value: Int32) -> Bool {
	if (value <= 3) {
		return value >= 2;
	}
	if ((value%2 == 0) || (value%3 == 0)) {
		return false;
	}
	var i: Int32;
	for (i = 5; i*i <= value; i += 6) {
		if ((value%i == 0) || (value%(i+2) == 0)) {
			return false;
		}
	}
	return true;
}

Main();
