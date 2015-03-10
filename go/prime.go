package main

import "fmt"

func main() {
	i := 0

	var a int32
	for a = 1; a <= 30000000; a++ {
		if isPrime(a) {
			//fmt.Println(strconv.Itoa(a) + ": is prime")
			i++
			continue
		}
		//fmt.Println(strconv.Itoa(a) + ": not prime")
	}

	fmt.Printf("Found %v primes.\n", i)
}

func isPrime(value int32) bool {
	if value <= 3 {
		return value >= 2
	}
	if value%2 == 0 || value%3 == 0 {
		return false
	}
	var i int32
	for i = 5; i*i <= value; i += 6 {
		if value%i == 0 || value%(i+2) == 0 {
			return false
		}
	}
	return true
}
