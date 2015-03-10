(function() {
	"use strict";
	
	function main() {
		var i = 0;
		
		for (var a = 1; a <= 30000000; a++) {
			if (isPrime(a)) {
				//console.log(a + ": is prime");
				i++;
				continue;
			}
			//console.log(a + ": not prime");
		}
		
		console.log("Found " + i + " primes.");
	}
	
	function isPrime(value) {
		if (value <= 3) {
			return value >= 2;
		}
		if ((value%2 === 0) || (value%3 === 0)) {
			return false;
		}
		for (var i = 5; i*i <= value; i += 6) {
			if ((value%i === 0) || (value%(i+2) === 0)) {
				return false;
			}
		}
		return true;
	}
	
	main();
}());
