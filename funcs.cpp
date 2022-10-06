/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab5

This program
*/

#include <iostream>
#include "funcs.h"

//This function returns true if n is divisible by d, and it returns false otherwise.
bool isDivisibleBy(int n, int d)
{
  if(n % d == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//This function returns true if n is a prime, and it returns false otherwise.
bool isPrime(int n)
{
  if(n >= 2)
  {
    for(int i = 2; i < n; i++)
    {
      if(n % i == 0)
      {
	return false;
      }
    }
    return true;
  }
  else
  {
    return false;
  }
}

//This function returns the smallest prime greater than n.
int nextPrime(int n)
{
  for(int i = n + 1; i > n; i++)
  {
    if(isPrime(i) == true)
    {
      return i;
    }
  }
  return 0;
}

//This function returns the number of prime numbers in the interval a <= x <= b.
int countPrimes(int a, int b)
{
  int count = 0;
  for(int i = a; i <= b; i++)
  {
    if(isPrime(i) == true)
    {
      count++;
    }
  }
  return count;
}
