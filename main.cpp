/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab5

This program works with functions and prime numbers
*/

#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "In main\n";
  bool result1 = isDivisibleBy(100, 25);
  std::cout << "Task A " << result1 << std::endl;

  bool result2 = isPrime(47);
  std::cout << "Task B " << result2 << std::endl;

  int result3 = nextPrime(14);
  std::cout << "Task C " << result3 << std::endl;

  int result4 = countPrimes(2, 17);
  std::cout << "Task D " << result4 << std::endl;

  bool result5 = isTwinPrime(17);
  std::cout << "Task E " << result5 << std::endl;

  int result6 = nextTwinPrime(29);
  std::cout << "Task F " << result6 << std::endl;

  int result7 = largestTwinPrime(5, 18);
  std::cout << "Task G " << result7 << std::endl;
  
  return 0;
}
