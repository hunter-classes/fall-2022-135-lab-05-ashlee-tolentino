#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Divisibility"){
  CHECK(isDivisibleBy(100, 25) == true);
  CHECK(isDivisibleBy(35, 17) == false);
  CHECK(isDivisibleBy(0, 3) == true);
  CHECK(isDivisibleBy(0, 0) == false);
  CHECK(isDivisibleBy(-12, 6) == true);
  CHECK(isDivisibleBy(10, -5) == true);
  CHECK(isDivisibleBy(-10, 3) == false);
}

TEST_CASE("Prime numbers"){
  CHECK(isPrime(-11) == false);
  CHECK(isPrime(0) == false);
  CHECK(isPrime(1) == false);
  CHECK(isPrime(2) == true);
  CHECK(isPrime(46) == false);
  CHECK(isPrime(47) == true);
}

TEST_CASE("Next prime number"){
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(-10) == 2);
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(1) == 2);
}

TEST_CASE("Count primes in range"){
  CHECK(countPrimes(-10, 17) == 7);
  CHECK(countPrimes(0, 17) == 7);
  CHECK(countPrimes(1, 17) == 7);
  CHECK(countPrimes(2, 17) == 7);
  CHECK(countPrimes(2, 47) == 15);
}

TEST_CASE("Twin primes"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(5) == true);
  CHECK(isTwinPrime(2) == false);
}

TEST_CASE("Next twin prime"){
  CHECK(nextTwinPrime(29) == 31);
  CHECK(nextTwinPrime(11) == 13);
  CHECK(nextTwinPrime(-20) == 3);
  CHECK(nextTwinPrime(0) == 3);
}

TEST_CASE("Largest twin prime in range"){
  CHECK(largestTwinPrime(5, 18) == 17);
  CHECK(largestTwinPrime(1, 31) == 31);
  CHECK(largestTwinPrime(14, 16) == -1);
}
