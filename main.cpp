/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab5

This program 
*/

#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "In main\n";
  bool result1 = isDivisibleBy(100, 25);
  std::cout << result1 << std::endl;

  bool result2 = isPrime(47);
  std::cout << result2 << std::endl;
  
  return 0;
}
