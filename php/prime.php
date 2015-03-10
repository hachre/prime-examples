<?php

function Main() {
	$i = 0;
	
	for ($a = 1; $a <= 30000000; $a++) {
		if (isPrime($a)) {
			//echo($a . ": is prime\n");
			$i++;
			continue;
		}
		//echo($a . ": not prime\n");
	}
	
	echo("Found " . $i . " primes.\n");
}

function isPrime($value) {
	if ($value <= 3) {
		return $value >= 2;
	}
	if (($value%2 == 0) || ($value%3 == 0)) {
		return false;
	}
	for ($i = 5; $i*$i <= $value; $i += 6) {
		if (($value%$i == 0) || ($value%($i+2) == 0)) {
			return false;
		}
	}
	return true;
}

Main();

?>
